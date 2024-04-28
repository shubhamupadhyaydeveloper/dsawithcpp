#include<iostream>
#include<vector>

using namespace std;

int binarySearch( vector<int>& searchArray , int searchValue) {
    int initial = 0;
    int last = searchArray.size() - 1;
    
    while (initial <= last) {
    cout << "Initial: " << initial << ", Last: " << last << endl;
    int midIndex = (initial + last) / 2;
    
    int guess = searchArray[midIndex];
    if (guess > searchValue) {
        last = midIndex - 1;
    } else if (guess < searchValue) {
        initial = midIndex + 1;
    } else if (guess == searchValue) {
        return midIndex;
    }}

    return -1;
}

int main() {
    vector<int> myVector = {1,2,3,4,5};

    cout <<  binarySearch(myVector , 5);

    return 0;
}