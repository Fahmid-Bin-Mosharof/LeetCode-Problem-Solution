// Date: 20/03/2025
// 100. Same Tree
// C++ Solution
// Preorder Traversal

class Solution {
public:
    void preorder(TreeNode* node, string &s) {
        if(!node){
            s += "null,";
            return;
        }

        s += to_string(node->val) + ",";
        preorder(node->left, s);
        preorder(node->right, s);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        string s1 = "";
        string s2 = "";

        preorder(p, s1);
        preorder(q, s2);
        
        return s1 == s2;
    }
};

// Time Complexity: O(n+m)
// Space Complexity: O(n+m)
