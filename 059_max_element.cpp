#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10000]; // here we dont put n , beacuse it will give error and not a good practice, so we take large no. as arr size
    for(int i=0;i<n;i++){
        cin>>arr[i];  // taking array as input from the user
    }
    int max_element = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max_element){
            max_element = arr[i];
        }
    }
    cout<<"Maximum element of the array is: "<<max_element;

    return 0;
}
