#include "pch.h"
#include <easy/reverseInteger.h>

TEST(TestReverseInteger, Test1) 
{
	const int test123 = 123;
	const int test321 = 321;
	EXPECT_EQ(reverseInteger(test123), test321);
	EXPECT_TRUE(true);
}