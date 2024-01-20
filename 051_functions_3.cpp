#include<iostream>
using namespace std;
void fact(int n){
    int i,fact;
    fact=1;
    for(i=1;i<=n;i=i+1){
        fact=fact*i;
    }
   cout<<fact;
}

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    fact(n);

    return 0;
}