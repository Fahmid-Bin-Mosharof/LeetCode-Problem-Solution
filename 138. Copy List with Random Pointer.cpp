// Date: 02/03/2025
// 138. Copy List with Random Pointer
// C++ Solution
// Hash Map

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){
            return NULL;
        }

        unordered_map<Node*, Node*>ans;
        Node* current = head;

        while(current){
            ans[current] = new Node(current->val);
            current = current->next;
        }

        current = head;
        while(current){
            ans[current]->next = ans[current->next];
            ans[current]->random = ans[current->random];
            current = current->next;
        }
        return ans[head];
    }
};

// Time Complexity: O(n)
// Space Cmplexity: O(n)