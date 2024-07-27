#include "database.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QCryptographicHash>
#include <QDebug>

QSqlDatabase DatabaseManager::connect() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/BC/Documents/NYSDDEREKAPP/messageapp.db");
    if (!db.open()) {
        qDebug() << "Error: " << db.lastError().text();
    }
    return db;
}

bool registerUser(const QString& name, const QString& email, const QString& password) {
    QSqlDatabase db = DatabaseManager::connect();
    QSqlQuery query(db);
    query.prepare("INSERT INTO users (name, email, password_hash) VALUES (:name, :email, :password_hash)");
    query.bindValue(":name", name);
    query.bindValue(":email", email);
    query.bindValue(":password_hash", QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());
    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
    return true;
}

bool loginUser(const QString& email, const QString& password) {
    QSqlDatabase db = DatabaseManager::connect();
    QSqlQuery query(db);
    query.prepare("SELECT password_hash FROM users WHERE email = :email");
    query.bindValue(":email", email);
    if (!query.exec() || !query.next()) {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
    QString storedHash = query.value(0).toString();
    QString inputHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
    return storedHash == inputHash;
}

bool sendMessage(int senderId, int receiverId, const QString& content) {
    QSqlDatabase db = DatabaseManager::connect();
    QSqlQuery query(db);
    query.prepare("INSERT INTO messages (sender_id, receiver_id, content) VALUES (:sender_id, :receiver_id, :content)");
    query.bindValue(":sender_id", senderId);
    query.bindValue(":receiver_id", receiverId);
    query.bindValue(":content", content);
    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
    return true;
}


/*bool sendMessage1(int senderId, int receiverId, const QString& content1) {
    QSqlDatabase db = DatabaseManager::connect();
    QSqlQuery query(db);
    query.prepare("INSERT INTO messages (sender_id, receiver_id, content1) VALUES (:sender_id, :receiver_id, :content1)");
    query.bindValue(":sender_id", senderId);
    query.bindValue(":receiver_id", receiverId);
    query.bindValue(":content1", content1);
    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        return false;
    }
    return true;
}*/


QList<QString> getMessages(int userId1, int userId2) {
    QSqlDatabase db = DatabaseManager::connect();
    QSqlQuery query(db);
    query.prepare("SELECT content FROM messages WHERE (sender_id = :user1 AND receiver_id = :user2) OR (sender_id = :user2 AND receiver_id = :user1) ORDER BY timestamp ASC");
    query.bindValue(":user1", userId1);
    query.bindValue(":user2", userId2);
    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        return {};
    }
    QList<QString> messages;
    while (query.next()) {
        messages.append(query.value(0).toString());
    }
    return messages;
}

