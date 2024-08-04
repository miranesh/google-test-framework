#include "pch.h"
#include "C:\\Users\katka\source\repos\ConsoleApplication17\ConsoleApplication17\mathfunc.cpp"

//TEST (TestCaseName, TestName) 
//   ASSERT_EQ(ожидаемое значение, вызов метода(фактический резульатт));
TEST(TestCaseName, TestInt) {
	ASSERT_EQ(120, factorial(5));
}


TEST(TestCaseName, TestFloat) {
	ASSERT_EQ(3.5, divAtoB(7,2));
}

TEST(TestCaseName, TestBool) {
	ASSERT_EQ(1, isPositiv(5));
}

TEST(TestCaseName, TestString) {
	std::string str = "12345";
	std::string res = "54321";
	ASSERT_TRUE(res == reverseStr(str));
}
