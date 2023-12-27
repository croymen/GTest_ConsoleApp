#include <iostream>
#include "DataBaseConnect.h"

DataBaseConnect::~DataBaseConnect()
{
}

bool DataBaseConnect::login(string username, string password)
{
    //do some stuff and login and return true
    cout << "LOGIN" << endl;
    return true;
}

bool DataBaseConnect::logout(string username)
{
    //do some stuff and succesfully logout
    cout << "logout" << endl;
    return true;
}

int DataBaseConnect::fetchRecord()
{
    cout << "fetch record" << endl;
    return -1;
}
