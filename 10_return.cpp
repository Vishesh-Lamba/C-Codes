#include <iostream>
using namespace std;

int main()
{
	cout << "Begin ";

	for (int i = 0; i < 10; i++) {

		// Termination condition 
		if (i == 5)
			return 0; // it will end the whole program here, it will not even print "end". if break is used here , end will also print

		cout << i << " ";
	}
	cout << "end";

	return 0;
}
