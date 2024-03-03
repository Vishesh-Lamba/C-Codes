#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;

    if(n%400==0){ // any yr divisible by 400 is leap year
        cout<<"Leap year";

    }
    else if(n%4==0 && n%100!= 0){ // any yr divisible by 4 but not divisible by 100 is leap year
        cout<<"leap year";

    }
    else{
        cout<<"non-leap year"; // any yr not divisible by 4 is non leap year
    }


    return 0;
}