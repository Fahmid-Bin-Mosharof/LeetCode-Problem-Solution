#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int n, m;
    cin>>n>>m;

    vector<vector<char>>a(n, vector<char>(m)); 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == '.'){
                if((i+j) % 2 == 0){
                    a[i][j] = 'B';
                } 
                else{
                    a[i][j] = 'W';
                }
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}