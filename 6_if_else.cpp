#include<iostream>
using namespace std;
//to check that number is odd and divisible by 5
int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;

    if(num%2!=0 && num%5==0){
        cout<<"number is odd and divisible by 5";
    }
    else if(num%2==0 && num%5==0){
        cout<<"num is divisible by 5 but not a odd number";
    }
    else{
        cout<<"num is not divisible by 5";
    }

    return 0;
}