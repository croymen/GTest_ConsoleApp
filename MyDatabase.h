#pragma once
#include "DataBaseConnect.h"

class MyDatabase
{
public:
	DataBaseConnect _dbc;
public:
	MyDatabase(DataBaseConnect& dbc);
	~MyDatabase();
	int Init(string username, string password);
};

