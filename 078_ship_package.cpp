#include<iostream>
using namespace std;
int main(){
    int a[]={3,2,2,4,1,4};
    int n=6,m=3;
    int start=0; 
    int end=0;
    int ans,mid;

    for(int i=0;i<n;i++){
        start=max(start,a[i]);  //start is maximum of all weight
        end+=a[i]; //end is sum of all weight
    }
    while(start<=end){
        mid=(start+end)/2;
        int weight=0;
        int day=1; 
        for(int i=0;i<n;i++){
            weight+=a[i];
            if(weight>mid){
                day++;
                weight=a[i];
            }
        }
        if(day<=m){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans;
    return 0;
}