#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"1";
    }
    int ans=0,mul=1,rem;
    while(n){
        rem=n%2;
        rem=rem^1;
        n/=2;
        ans=ans+rem*mul;
        mul*=2;
    }
    cout<<ans;
    return 0;
}