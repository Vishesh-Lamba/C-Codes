#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to be searched";
    cin>>n;
    int i;

    int arr[5]={1,2,3,4,5};
    int index =0;

    for(int i=0;i<5;i++){
        if(arr[i]==n){
            index = i;
            cout<<"element found at index"<<index;
            break;
        }
    }

    return 0;
}
