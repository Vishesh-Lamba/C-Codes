#include<iostream>
using namespace std;
int main(){

    int n,i,c=0;
    cout<<"enter the number:";
    cin>>n;

    if(n<2){
        cout<<"neither composite nor prime";
        return 0;
    }
    else{
        for(i=1;i<n;i++){
            if(n%i==0){
                c=c+1;
        }
    }
    }
    if(c==1){
        cout<<"prime number";
    }
    else{
        cout<<"composite number";
    }

    return 0;
}