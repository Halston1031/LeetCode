/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> indices;
        int left;
        for (int i = 0; i < nums.size(); i++)
        {
            indices[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            left = target - nums[i];
            if (indices.count(left) && indices[left] != i)
            {
                return {i, indices[left]};
            }
        }
        return {};
    }
};
// @lc code=end
