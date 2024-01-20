#include<iostream>
using namespace std;
int main(){
    float a;
    float i;
    cout<<"Enter the no:";
    cin>>a;
    cout<<"Multiplication table is:"<<endl;

    for(i=1; i<=10; i=i+1){
        cout<<a<<"x"<<i<<"="<<a*i<<endl;
    }

return 0;
}
