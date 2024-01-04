#include<iostream>
using namespace std;
int main(){

    int num,rem,ans=0;
    cout<<"enter number:";
    cin>>num;

        while(num!=0){
            rem=num%10;
            num=num/10;
            ans=ans+rem;
    }
        num=ans;

    cout<<"sum of digits is:"<<ans;

    return 0;
}
