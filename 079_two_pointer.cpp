#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter no.of elements:";
    cin>>n;
    cout<<"enter elements:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0;
    int end=n-1;

    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else{
                end--;
            }
        }
    }

    cout<<"sorted array:";
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}