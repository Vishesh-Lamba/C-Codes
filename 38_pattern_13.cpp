#include<iostream>
using namespace std;
int main(){

    /*
    row 1
    row up to 5
    print space , 5-row
    print 1 to row , inc
    print row-1 to 1, dec
    row++
    */

    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
