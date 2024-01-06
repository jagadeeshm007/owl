#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int c=0,k=a^b;
    while(k){
        if(k&1) c++;
        k=k>>1;
    }
    if(c%2==0) cout<<c/2;
    else cout<<-1;
}
