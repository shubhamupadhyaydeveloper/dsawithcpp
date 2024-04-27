#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

    int number = 24341;
    int total = 0;
 
    while( number != 0 ) {
      total += number % 10;
      number /= 10;
    }
    
    cout << "Total sum " << total << endl;
   
    return 0;
}