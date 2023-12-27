#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "DataBaseConnectMock.cpp"
#include "MyDatabase.h"

using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

TEST(MyDatabaseTest, Login) {
	//Arrange
	DataBaseConnectMock dbc;	
	MyDatabase db(dbc);	

	//_ - any value can be used
	EXPECT_CALL(dbc, login("Terminator", "I' am back"))
		.Times(AtLeast(1))
		.WillRepeatedly(Return(true));
		
	//Act
	int retval = db.Init("Terminator", "I' am back");
	//Assert
	EXPECT_EQ(retval, 1);
}



