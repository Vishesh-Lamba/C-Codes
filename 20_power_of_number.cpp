#include<iostream>
using namespace std;
int main(){

    int a;
    int b;
    int i;
    int num;

    cout<<"enter the number:";
    cin>>a;
    cout<<"enter the power:";
    cin>>b;

    num=a;

    for(i=1;i<b;i=i+1){
        num=num*a;
    }

    cout<<num;


    return 0;
}