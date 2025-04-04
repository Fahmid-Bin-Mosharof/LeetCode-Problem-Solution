// Date: 04/04/2025
// 112. Path Sum
// C++ Solution
// DFS using Stack

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        
        stack<pair<TreeNode*, int>>s;
        s.push({root, root->val});
        
        while(!s.empty()){
            pair<TreeNode*, int>current = s.top();
            s.pop();

            TreeNode* node = current.first;
            int currSum = current.second;
            
            if(!node->left && !node->right && currSum == targetSum){
                return true;
            }
            
            if(node->right){
                s.push({node->right, currSum + node->right->val});
            }
            
            if(node->left){
                s.push({node->left, currSum + node->left->val});
            }
        }
        return false;  
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)