#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the value:"<<endl;
    cin>>ch;

    if(isalpha(ch)){  // isalpha is a function used to check whether character is alphabet or not.
        cout<<"it is an alphabet.";
    }
    else{
        cout<<"not an alphabet.";
    }


    return 0;
}
