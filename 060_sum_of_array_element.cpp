#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size:";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i]; //taking array as input from the user
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i]; // adding all the element
    }
    cout<<"sum of element is:"<<sum;
    return 0;
}
