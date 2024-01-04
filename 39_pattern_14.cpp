#include<iostream>
using namespace std;
int main(){
    /*
    row 5
    upto 1 
    print space
    print star , 2i-1
    row--
    */
   
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=(9-(2*i-1))/2;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
    cout<<endl;
    }

    return 0;
}
