#include<iostream>
using namespace std;
int main(){
    cout<<"enter the numbers:";
    int a,b;
    cin>>a>>b;

    int count=0;
    count+= min(8-a,8-b); 
    count+= min(8-a,b-1);
    count+= min(a-1,b-1);
    count+= min(a-1,8-b);

    cout<<count;
    return 0;
}