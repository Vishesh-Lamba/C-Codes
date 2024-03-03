#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans=0,mul=1;
    while(n>0){

        int digit = n%10;
        n=n/10;
        ans=ans+mul*digit;
        mul=mul*2;
    }
    cout<<ans<<endl;
    return 0;
}