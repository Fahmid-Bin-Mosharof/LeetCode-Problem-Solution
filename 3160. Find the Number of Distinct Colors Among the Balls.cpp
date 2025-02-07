// Date: 07/02/2025
// 3160. Find the Number of Distinct Colors Among the Balls
// C++ Solution
// Hash Map and Hash Set

class Solution {
    public:
        vector<int> queryResults(int limit, vector<vector<int>>& queries) {
            unordered_map<int, int>ball; 
            unordered_set<int>color;
            unordered_map<int, int>count;
            
            vector<int>ans;
            ans.reserve(queries.size());
            
            for(auto& q : queries){
                int a = q[0];
                int b = q[1];
                
                if(ball.count(a)){
                    int x = ball[a];
                    if(--count[x] == 0){
                        color.erase(x);
                    }
                }
                
                ball[a] = b;
                if(++count[b] == 1){
                    color.insert(b);
                }
                ans.push_back(color.size());
            }
            return ans;
        }
    };
    
// Time Complexity: O(n)
// Space Complexity: O(n+limit)