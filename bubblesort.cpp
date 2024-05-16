#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    bool allSorted = true;
    while(allSorted) {
        allSorted = false;
        for(int i = 0; i < n - 1; i ++) {
            if( arr[i] > arr[i + 1]) {
                int current = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = current;
                allSorted = true;
            }
        }
    }
}

int main() {
    int myArray[] = {3,1,5,2,8,4};
    int length = sizeof(myArray) / sizeof(int);

    bubbleSort(myArray,length);

    for(int i = 0; i < length ; i++) {
        cout << myArray[i] << " ";
    }

    cout << endl;

    return 0;
}
