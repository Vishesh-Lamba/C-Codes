#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
        cout<<"its a rectangle";
    }
    else{
        cout<<"no";
    }
    return 0;
}