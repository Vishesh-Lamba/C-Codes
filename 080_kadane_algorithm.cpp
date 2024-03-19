#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[4]={4,-6,2,8};
    int prefix=INT_MIN;
    int ans=0;

    for(int i=0;i<4;i++){
        prefix+=arr[i];
        ans=max(ans,prefix); 
        if(prefix<0){         //kadane algorithm , calculating max sum of subarray 
            prefix=0;
        }
    }
    cout<<ans;
    return 0;
}