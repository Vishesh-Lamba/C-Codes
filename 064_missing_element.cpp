#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};   
    int sum=0;
    for(int i=0;i<6;i++){
        sum+=arr[i];
    }

    int missing=(28-sum); // 28 = sum of 1 to 7 
    cout<<missing;
    return 0;
}