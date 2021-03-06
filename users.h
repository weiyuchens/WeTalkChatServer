#ifndef USERS_H
#define USERS_H
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// struct UserInfo
// {
//     /* data */
//     string username;
//     string password;
//     int status;
// };

class User
{
private:
public:
    User();
    User(string id, string name, int sockfd);
    ~User();

    string id;
    string name;
    int sockfd;
};

struct Node
{
    /* data */
    User user;
    Node *next;
};

class Users
{
private:
    /* data */
    Node *head;
    int users_length;

public:
    Users(/* args */);
    ~Users();

    void push(User user);
    void pop(int sockfd);
    int length();
    int select_sockfd();
    void show_users();
    Node *&get_users_head();
};

#endif // USERS_H