#include<iostream>
using namespace std;
int main(){
        int n,i,j;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[1000];

//user inputing the array
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//insertion sorting
    for(i=1;i<n;i++){
        for(j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }

        }
    }

//printing the array

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}