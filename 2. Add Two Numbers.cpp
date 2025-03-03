// Date: 03/03/2025
// 2. Add Two Numbers
// C++ Solution
// Carry Propagation

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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode ans(0);
        ListNode* x = &ans;
        int temp = 0;
        
        while(l1 || l2 || temp){
            int a;
            int b;
            if(l1){
                a = l1->val;
            }
            else{
                a = 0;
            }

            if(l2){
                b = l2->val;
            }
            else{
                b = 0;
            }
            int sum = a + b + temp;

            temp = sum / 10;
            x->next = new ListNode(sum % 10);
            x = x->next;

            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }
        return ans.next;
    }
};

// Time Complexity: O(n+m)
// Space Complexity: O(n+m)