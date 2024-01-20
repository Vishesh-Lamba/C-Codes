#include<iostream>
using namespace std;
int x;

void externclass(){
    extern int x;  //extern will tell compiler that x is defined elsewhere and changes made inside this block will be shown.
    x=2;
    cout<<x<<endl;
}

int staticFun()
{
    cout << "For static variables: ";
    static int count = 0;
    count++;
    return count;  //when the function is called twice, the second time count=1, so output will be 1+1=2, it preserve the value 1 because of      static int.
}

int nonStaticFun()
{
    cout << "For Non-Static variables: ";
 
    int count = 0;
    count++;
    return count;
}
 



int main(){

    externclass();
    cout<<staticFun()<<endl;
    cout<<staticFun()<<endl;
    cout<<nonStaticFun()<<endl;
    cout<<nonStaticFun()<<endl;







    return 0;
}