#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    for(int i = 0; i < n ; i++) {
        int minIndex = i;
        for(int j = i + 1 ; j < n ; j++) {
            if(arr[i] > arr[j]) {
                minIndex = j;
            }
        } 
       
       if( minIndex != i) {
          int current = arr[i];
          arr[i] = arr[minIndex];
          arr[minIndex] = current;
       }
    }
}



int main() {
    int myArray[] = {2,7,5,9};
    int length = sizeof(myArray) / sizeof(int);

    selectionSort(myArray,length);

    for(int i = 0; i < length ; i++) {
        cout << myArray[i] << "";
    }

    cout << endl;

    return 0;
}