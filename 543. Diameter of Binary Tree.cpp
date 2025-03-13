// Date: 13/03/2025
// 543. Diameter of Binary Tree
// C++ Solution
// DFS

class Solution {
private:
    int diameter(TreeNode* root, int& ans){
        if(!root){
            return 0;
        }

        int left = diameter(root->left, ans);
        int right = diameter(root->right, ans);

        ans = max(ans, left+right);
        return 1 + max(left, right);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        diameter(root, ans);
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)