#include<iostream>
using namespace std;
int main(){
    int x,rem,ans=0;
    cout<<"enter the number:";
    cin>>x;
    int temp=x;

    while(x!=0){
        rem=x%10;
        x=x/10;
        ans=ans*10+rem;
    }

    if(ans==temp){
        cout<<"palindrome no.";
    }
    else{
        cout<<"not palindrome no.";
    }


    return 0;
}