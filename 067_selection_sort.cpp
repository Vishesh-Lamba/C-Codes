#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[1000];

    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int index=0;

    for(i=0;i<n-1;i++){
        index=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[index]){
            index=j;
            swap(arr[i],arr[index]);
        }
    }
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}