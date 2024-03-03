 /*a number that equals the sum of its digits, each raised to a power. For example, if you have a number like 153, it's an Armstrong number because 1^3 + 5^3 + 3^3 equals 153.*/

#include<iostream>
#include<cmath>
using namespace std;

    int countdigit(int n){
        int count=0;
        while(n){
            count++;
            n/=10;
        }
        return count;
    }
    
    bool Armstrong(int num, int digit){
        int n=num, ans=0, rem;
        while(n){
            rem= n%10;
            n/=10;
            ans=ans+pow(rem,digit);
        }
        if(ans==num)
        return 1;
        else
        return 0;
    }


        int main(){
            int num;
            cin>>num;

            int digit= countdigit(num);
            cout<<Armstrong(num,digit)<<endl;
        }


