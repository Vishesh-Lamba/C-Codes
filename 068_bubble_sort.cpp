#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[1000];

//user inputing the array
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//bubble sorting
    for(i=n-2;i>=0;i--){
        bool swapped =0; // if not swapped means array is sorted
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swapped=1; //if swapped means array is not sorted
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0){
            break;
        }
    }

//printing the array

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}