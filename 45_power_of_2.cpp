#include<iostream>
using namespace std;
int main(){
    int n,rem;
    cout<<"enter number:";
    cin>>n;

       if(n<1)
       cout<<"not power of 2";

        while(n!=1){

            if(n%2==1){
            cout<<"not 2 power";
            break;
            }
            else{
                cout<<"2 power";
                break;
            }

            n=n/2;
        }

    return 0;
}
