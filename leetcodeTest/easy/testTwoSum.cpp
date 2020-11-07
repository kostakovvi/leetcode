#include <pch.h>
#include <easy/twoSum.h>

TEST(TestTwoSum, Test1) 
{
	std::vector<int> testData1 { 2, 7, 11, 15 };
	const int target1 = 9;
	const std::vector<int> expectedResult1 {0, 1};
	EXPECT_EQ(twoSum(testData1, target1), expectedResult1);
	EXPECT_TRUE(twoSum(testData1, target1) == twoSumV2(testData1, target1));
}

TEST(TestTwoSum, Test2)
{
	std::vector<int> testData2 { 3, 2, 4 };
	const int target2 = 6;
	const std::vector<int> expectedResult2 { 1, 2 };
	EXPECT_EQ(twoSum(testData2, target2), expectedResult2);
	EXPECT_TRUE(twoSum(testData2, target2) == twoSumV2(testData2, target2));
}

TEST(TestTwoSum, Test3)
{
	std::vector<int> testData3 { 3, 3 };
	const int target3 = 6;
	const std::vector<int> expectedResult3 { 0, 1 };
	EXPECT_EQ(twoSum(testData3, target3), expectedResult3);
	EXPECT_TRUE(twoSum(testData3, target3) == twoSumV2(testData3, target3));
}
