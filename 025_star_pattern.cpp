#include<iostream>
using namespace std;
int main(){
    /*
    row 1
    row upto 5
    print * 5 times
    row++
    */

    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }



    return 0;
}