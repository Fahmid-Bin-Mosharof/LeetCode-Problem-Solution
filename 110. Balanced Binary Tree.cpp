// Date: 14/03/2025
// 110. Balanced Binary Tree
// C++ Solution
// Bottom Up Recursion(DFS)

class Solution {
private:
    int height(TreeNode* root){
        if(!root){
            return 0;
        }

        int leftHeight = height(root->left);
        if(leftHeight == -1){
            return -1;
        }

        int rightHeight = height(root->right);
        if(rightHeight == -1){
            return -1;
        }

        if(abs(leftHeight - rightHeight) > 1){
            return -1;
        }

        return 1 + max(leftHeight, rightHeight);
    }
    
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};

// Time COmplexity: O(n)
// Space Complexity: O(n)