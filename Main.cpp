// GTest_ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <gmock/gmock.h>
#include "gtest/gtest.h"

using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

int main(int argc, char** argv) {
	// The following line must be executed to initialize Google Mock
	// (and Google Test) before running the tests.
	//testing::InitGoogleTest(&argc, argv);
	testing::InitGoogleMock(&argc, argv);	
	return RUN_ALL_TESTS();
}

/*
class Aaa {
public:	
	virtual int GetX() {
		return 0;
	};
};


class MockAaa : public Aaa {
public:	
	MOCK_METHOD0(GetX, int());
};

class Painter {
public:
	Aaa a;
public:
	Painter(Aaa& t) {
		a = t;
	}

	bool DrawCircle() {
		int x = a.GetX();
		int y = 5;
		//draw
		return true;
	}
};

TEST(PainterTest, CanDrawSomething) {
	MockAaa turtle;                              // #2
	EXPECT_CALL(turtle, GetX())                  // #3
		.Times(AtLeast(1));

	Painter painter(turtle);                       // #4

	EXPECT_TRUE(painter.DrawCircle()); 
	delete &turtle; // error
}
*/