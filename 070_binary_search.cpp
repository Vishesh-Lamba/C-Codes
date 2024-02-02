#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}


int main(){
    int n,i,j;
    cout<<"enter the size of array";
    cin>>n;
    int arr[1000];

//user inputing the array
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter the key";
    cin>>key;

    cout<<"element found at index "<<BinarySearch(arr,n,key);

    return 0;
}