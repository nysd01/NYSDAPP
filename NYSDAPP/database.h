#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>
#include <QString>
#include<QList>

class DatabaseManager {
public:
    static QSqlDatabase connect();
};

bool registerUser(const QString& name, const QString& email, const QString& password);
bool loginUser(const QString& email, const QString& password);
bool sendMessage(int senderId, int receiverId, const QString& content);
//bool sendMessage1(int senderId, int receiverId, const QString& content1);
QList<QString> getMessages(int userId1, int userId2);

#endif // DATABASE_H
