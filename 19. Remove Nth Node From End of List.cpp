// Date> 28/02/2025
// 19. Remove Nth Node From End of List
// C++ Solution
// Two Pointer

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode ans(0);
        ans.next = head;
        
        ListNode* fast = &ans;
        ListNode* slow = &ans;

        for(int i=0; i<=n; i++){
            fast = fast->next;
        }

        while(fast){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        
        return ans.next;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)