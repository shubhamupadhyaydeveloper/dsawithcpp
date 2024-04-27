#include<iostream>
using namespace std;



void printStar(int num) {

    if(num == 0 ) {
        return;
    }

    for (int i = 0; i < num; i++) {
       cout << "*";
    }

    cout << endl;
    printStar(num - 1);
}

int sumNumber(int num) {
    int total = num;
    if(num == 1) {
        return 1;
    }
    return total + sumNumber(num - 1) ;
}


int main() {
    // printStar(10);
    cout << ((bool)1 + 2) << endl;
    cout << (23.5 + 2  + 'A');
    return 0;
}


