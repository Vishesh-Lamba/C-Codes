#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cout<<"enter x:";
    cin>>x;
            int ans=0 ,rem, mul=1;

        while(x!=0){
            rem=x%2;
            x=x/2;
            ans=rem*mul+ans;
            mul=mul*10;
        }
        cout<<ans;

    return 0;
}