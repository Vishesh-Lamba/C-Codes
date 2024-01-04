#include<iostream>
using namespace std;
int main(){
    
    int a,b;
    cout<<"enter first number:";
    cin>>a;    //taking input from the user
    cout<<"enter second number:";
    cin>>b;

    int sum = a+b ;
    int sub = a-b ;
    int div = a/b ;
    int mul = a*b ;

    cout<<"Sum of the numbers is :"<<sum<<endl;
    cout<<"Sub of the numbers is :"<<sub<<endl;
    cout<<"div of the numbers is :"<<div<<endl;
    cout<<"mul of the numbers is :"<<mul<<endl;


    return 0;
}
