#include<iostream>
using namespace std;
int main(){
    /*
    row 4
    row upto 1
    print * row times
    print space 8-2 row times
    print * row times
    row--
    */
    int i,j;
    for(i=4;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=8-2*i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    /*
    row 1 to 4
    print * row times
    print space 8-2 row times
    print * row times
    row++
    */

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=8-2*i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
