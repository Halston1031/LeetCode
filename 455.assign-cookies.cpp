/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        if (g.size() < 1)
            return 0;
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int child = 0, cookie = 0;
        while (child < g.size() && cookie < s.size())
        {
            if (g[child] <= s[cookie])
            {
                child++; // 孩子的飢餓度小於餅乾，滿足孩子飽腹
            }
            cookie++;
        }
        return child;
    }
};
// @lc code=end
