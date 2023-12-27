#pragma once
#include <string>
using namespace std;

class DataBaseConnect
{
public:	
	~DataBaseConnect();
	virtual bool login(string username, string password);
	virtual bool logout(string username);
	virtual int fetchRecord();
};

