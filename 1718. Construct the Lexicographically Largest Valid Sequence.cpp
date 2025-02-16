// Date: 16/02/2025
// 1718. Construct the Lexicographically Largest Valid Sequence
// C++ Solution
// Backtracking

class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        int size = 2*n-1;
        vector<int>a(n+1, 0);
        vector<int>ans(size, 0);
    
        function<int(int)>backtrack = [&](int index){
            if(index == size){
                return 1;
            }
            if(ans[index] != 0){
                return backtrack(index + 1);
            }
            
            for(int i=n; i>=1; i--){
                if(a[i]){
                    continue;
                }
                
                if(i == 1){
                    ans[index] = 1;
                    a[i] = 1;
                    if(backtrack(index + 1)){
                        return 1;
                    }
                    a[i] = 0;
                    ans[index] = 0;
                } 
                else{
                    int position = index + i;
                    if(position<size && ans[position] == 0){
                        ans[index] = ans[position] = i;
                        a[i] = 1;
                        
                        if(backtrack(index + 1)){
                            return 1;
                        }
                        a[i] = 0;
                        ans[index] = ans[position] = 0;
                    }
                }
            }
            return 0;
        };
        backtrack(0);
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)