//Factorials of large numbers in cpp 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    v.push_back(1);
    int carry=0,value=0;
    for(int i=1;i<=n;i++){
        int mlt=i;
        for(int j=0;j<v.size();j++){
            value=v[j]*mlt+carry;
            v[j]=value%10;
            carry=value/10;
        }
        while(carry){
            v.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(v.begin(),v.end());
    for(auto i:v){
        cout<<i;
    }
    return 0;
}
