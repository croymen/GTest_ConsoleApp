#include "MyDatabase.h"
#include <iostream>

MyDatabase::MyDatabase(DataBaseConnect& dbc)
{
	_dbc = dbc;
}

MyDatabase::~MyDatabase()
{
}

int MyDatabase::Init(string username, string password)
{
	int ret = -1;
	if (_dbc.login(username, password)) {
		cout << "DB SUCCESS"<< endl;
		ret = 1;
	}
	else {
		cout << "DB FAILURE" << endl;
	}
	return ret;
}
