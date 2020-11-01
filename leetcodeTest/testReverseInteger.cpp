#include "pch.h"
#include <easy/reverseInteger.h>

TEST(TestReverseInteger, Test1) 
{
	const int test123 = 123;
	const int test321 = 321;
	const int testM123 = -123;
	const int testM321 = -321;
	const int test0 = 0;
	const int test1534236469 = 1534236469;

	EXPECT_EQ(reverseInteger(test123), test321);
	EXPECT_EQ(reverseInteger(testM123), testM321);
	EXPECT_EQ(reverseInteger(INT_MAX), test0);
	EXPECT_EQ(reverseInteger(INT_MIN), test0);
	EXPECT_EQ(reverseInteger(test0), test0);
	EXPECT_EQ(reverseInteger(test1534236469), test0);

	const bool isTest123Expected = reverseInteger(test123) == test321;
	EXPECT_TRUE(isTest123Expected == true);
}