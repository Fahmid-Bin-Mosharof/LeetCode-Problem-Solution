// Date: 08/02/2025
// 2349. Design a Number Container System
// C++ Solution

class NumberContainers {
    unordered_map<int, int>n;
    unordered_map<int, set<int>>ans;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(n.count(index)){
            int x = n[index];
            if(x == number){
                return;
            }

            ans[x].erase(index);
            if(ans[x].empty()){
                ans.erase(x);
            }
        }
        n[index] = number;
        ans[number].insert(index);
    }
    
    int find(int number){
         if(!ans.count(number) || ans[number].empty()) {
            return -1;
        }
        return *ans[number].begin();
    }
};

// Time Complexiyt: O(1)
// Space Complexiyt: O(n)

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */