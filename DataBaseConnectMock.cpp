#pragma once
#include "DataBaseConnect.h"
#include <gmock/gmock.h>
//#include <gtest/gtest.h>

class DataBaseConnectMock : public DataBaseConnect
{

public:
	MOCK_METHOD0(fetchRecord, int());
	MOCK_CONST_METHOD1(logout, bool(string));
	MOCK_CONST_METHOD2(login, bool(string, string));
};
