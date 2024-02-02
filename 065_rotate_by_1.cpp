#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,6};
    int last=a[5];

    for(int i=4;i>=0;i--){
        a[i+1]=a[i];
    }
    
    a[0]=last;

    for(int i=0;i<6;i++){
        cout<<a[i];
    }
    return 0;
}