#include<iostream>
using namespace std;

 void changevalue(int &a){
    a=100;
    }

int main(){
    //pass by reference
    
    int z =5;
    changevalue(z);
    cout<<z;    

    return 0;
}
