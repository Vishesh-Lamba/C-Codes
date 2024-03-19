#include<iostream>
#include<algorithm>
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

    int key;
    cout<<"enter the key"<<endl;
    cin>>key;

    cout<<"first position of key is"<<endl;
    //for first position
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
            break;
        }
    }
    cout<<endl;

    cout<<"last position of key is"<<endl;
    //for last position
    for(int i=n-1;i>=0;i--){
        if(arr[i]==key){
            cout<<i;
            break;
        }
    }




    return 0;
}