#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<vector<int>> m(n,vector<int>(32,0));
    for(int i=0;i<n;i++){
        int c=31,a=v[i];
        while(a){
            if(a&1) m[i][c]=1;
            a=a>>1;
            c--;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<32;j++){
            m[i][j]=m[i-1][j]+m[i][j];
        }
    }
    for(auto i:m){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
