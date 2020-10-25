/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) 
    {
        if(n < 2) return n;
        int a = 0, b = 1, c = 1, d;
        for(int i = 2; i < n; i++)
        {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return c;
    }
};
// @lc code=end

