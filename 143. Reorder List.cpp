// Date : 27/02/2025
// 143. Reorder List
// C++ Solution
// Find middle, reverse second half, and merge

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
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next){
            return;
        }

        ListNode* x = head;
        ListNode* y = head;

        while(y && y->next){
            x = x->next;
            y = y->next->next;
        }

        ListNode* prev = NULL;
        ListNode* current = x->next;
        ListNode* next;
        x->next = NULL;

        while(current){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        ListNode* second = prev;
        ListNode* first = head;

        while(second){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)