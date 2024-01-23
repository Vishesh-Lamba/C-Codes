#include<iostream>
using namespace std;
int main(){

    // you start the game and if you get multiple of 4 you win else you lose. you have to count upto n , and you may increase value max by 3 , who so ever reaches n firsrt will win the game.

    int n;
    cin>>n;
    if(n%4==0){
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
