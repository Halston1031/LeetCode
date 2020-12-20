/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        int sum = 0;
        ListNode *l3 = nullptr;
        ListNode *current = nullptr;
        while (l1 != nullptr && l2 != nullptr)
        {
            sum = l1->val + l2->val + carry;
            if (sum > 9)
                carry = sum / 10;
            else
                carry = 0;
            ListNode *n1 = new ListNode(sum % 10);
            if (l3 == nullptr)
            {
                l3 = n1;
                current = n1;
            }
            else
            {
                current->next = n1;
                current = current->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l1 == nullptr && l2 != nullptr)
        {
            while (l2 != nullptr)
            {
                sum = l2->val + carry;
                if (sum > 9)
                    carry = sum / 10;
                else
                    carry = 0;

                ListNode *n1 = new ListNode(sum % 10);
                current->next = n1;
                current = current->next;
                l2 = l2->next;
            }
        }
        else if (l2 == nullptr && l1 != nullptr)
        {
            while (l1 != nullptr)
            {
                sum = l1->val + carry;
                if (sum > 9)
                    carry = sum / 10;
                else
                    carry = 0;

                ListNode *n1 = new ListNode(sum % 10);
                current->next = n1;
                current = current->next;
                l1 = l1->next;
            }
        }
        if (carry != 0 && (l1 == nullptr && l2 == nullptr))
        {
            ListNode *n1 = new ListNode(carry);
            current->next = n1;
            current = current->next;
        }

        return l3;
    }
};

// @lc code=end
