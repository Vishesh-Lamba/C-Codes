#include <iostream>
#include<climits> // for INT_MAX and INT_MIN
using namespace std;

int main() {
    int arr[5] = {5, 8, 2, 10, 7};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        } 
    }
    for(int i = 0; i < 5; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    cout << "The second largest element is: " << secondLargest << endl;

    return 0;
}
