#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter first no.";
    cin>>x;
    cout<<"enter second no.";
    cin>>y;

    // Code to swap 'x' and 'y'
    x = x + y; 
    y = x - y; 
    x = x - y; 

    cout << "After Swapping:\n";
    cout<<"first number is :"<<x<<endl;
    cout<<"second number is:"<<y<<endl;

    return 0;
}