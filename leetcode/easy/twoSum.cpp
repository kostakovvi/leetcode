#include <easy/twoSum.h>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> hashmap { std::make_pair(nums[0], 0) };

    for (int i = 1; i < nums.size(); ++i) 
    {
        const auto current = nums[i];
        auto it = hashmap.find(target - current);
        if (it != hashmap.end() && it->second != i) 
        {
            return { it->second, i };
        }

        hashmap[current] = i;
    }

    return {};
}

std::vector<int> twoSumV2(std::vector<int>& nums, int target)
{
    std::vector<int> result;
    const auto numsSize = nums.size();
    for (int i = 0; i < numsSize; ++i)
    {
        for (int j = i; j < numsSize; ++j)
        {
            if (j != i && (nums[i] + nums[j] == target))
            {
                result.push_back(i);
                result.push_back(j);

                return result;
            }
        }
    }
    return result;
}
