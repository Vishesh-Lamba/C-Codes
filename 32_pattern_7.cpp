#include<iostream>
using namespace std;
int main(){

   int i,j;
    for(i=1;i<=5;i++){
        char c='a'+i-1;
        for(j=1;j<=i;j++){ 
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}
