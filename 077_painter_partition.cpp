#include<iostream>
using namespace std;
int main(){
    int a[]={5,10,30,20,15};
    int n=5,mid,start=0,end=0,ans,m=3;

    for(int i=0;i<n;i++){ //defining start and end
        start=max(start,a[i]);
        end+=a[i];
    }
    
    while(start<=end){
        mid=(start+end)/2;
        int time=0; 
        int count=1; 
        for(int i=0;i<n;i++){
            time+=a[i];
            if(time>mid){
                count++; 
                time=a[i];
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