#include <iostream>
using namespace std;

int main(){

    int a = 5; 
    cout<<a<<endl;

    int ch ='b';
    cout<<ch<<endl;  // type casting :- here ch is of integer type, hence output will be ASCII value of b.

    char z = 99;
    cout<<z<<endl; // similar case of type casting. 

	cout << "Size of char : " << sizeof(char) << endl;  //sizeof() tells the no. of bytes occupied by the data.
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of long : " << sizeof(long) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;


    return 0;
}

