#include<iostream>
using namespace std;
int main(){

    /*
    row 1
    row upto 5
    print a to e
    row ++
    */
   
    int i,j;
    char v='a';
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cout<<v<<" ";
            v++;
        }
        cout<<endl;
        v='a';
    }
    return 0;
}
