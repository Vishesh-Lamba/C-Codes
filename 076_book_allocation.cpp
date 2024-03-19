#include<iostream>
using namespace std;
int main(){
    int a[]={12,34,67,90};
    int n=4,m=2;
    int start=0; 
    int end=0;
    int ans,mid;

    for(int i=0;i<n;i++){
        start=max(start,a[i]);  //start is maximum of all pages
        end+=a[i]; //end is sum of all pages
    }
    while(start<=end){
        mid=(start+end)/2;
        int pages=0;
        int count=1; //student no. 1
        for(int i=0;i<n;i++){
            pages+=a[i];
            if(pages>mid){
                count++; //student no. 2
                pages=a[i];
            }
        }
        if(count<=m){
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