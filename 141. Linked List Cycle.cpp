// Date: 25/02/2025
// 141. Linked List Cycle
// C++ Solution
// Pointer

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* x = head;
        ListNode* y = head;
        
        while(y && y->next){
            x = x->next;        
            y = y->next->next;   
            if(x == y){
                return true;
            }
        }
        return false;
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)