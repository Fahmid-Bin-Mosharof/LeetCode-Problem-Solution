// Date: 11/03/2025
// 104. Maximum Depth of Binary Tree
// C++ Solution
// Recursive DFS

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }

        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)