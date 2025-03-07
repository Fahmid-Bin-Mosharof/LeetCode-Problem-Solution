// Date: 07/03/2025
// 23. Merge k Sorted Lists
// C++ Solution
// Brute Force

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>nodes;

        for(auto list : lists){
            ListNode* current = list;
            while(current){
                nodes.push_back(current->val);
                current = current->next;
            }
        }
        sort(nodes.begin(), nodes.end());

        ListNode* ans = new ListNode(0);
        ListNode* current = ans;

        for(int val : nodes){
            current->next = new ListNode(val);
            current = current->next;
        }
        return ans->next;
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(n)