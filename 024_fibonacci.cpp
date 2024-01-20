#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";

    int c,i;

    for(i=0;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }


    return 0;
}