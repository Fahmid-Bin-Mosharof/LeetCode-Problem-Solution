// Date: 14/02/2025
// 1352. Product of the Last K Numbers
// C++ Solution
// Prefix product

class ProductOfNumbers {
private:
    vector<int>a;  
    int x = -1; 
public:
    ProductOfNumbers() {
        a.push_back(1);
    }
        
    void add(int num) {
        if(num == 0){
            a.clear();
            a.push_back(1); 
            x = a.size() - 1; 
        }
        else{
            a.push_back(a.back() * num);
        }
    }
        
    int getProduct(int k) {
        int n = a.size();
        if(k >= n){
            return 0;
        } 
        return a.back() / a[n-1-k];
    }
};
    
// Time Complexity: O(1)
// Space Complexity: O(n)
    
/**
* Your ProductOfNumbers object will be instantiated and called as such:
* ProductOfNumbers* obj = new ProductOfNumbers();
* obj->add(num);
* int param_2 = obj->getProduct(k);
*/