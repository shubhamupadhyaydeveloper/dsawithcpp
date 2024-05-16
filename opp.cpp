#include <iostream>
#include <string>
using namespace std;

// int myArray[] = {1,2,3,4,5,6};
// int length = sizeof(myArray) / sizeof(int);

// int startIndex = 0;
// int endIndex = length - 1;

// while (startIndex <= endIndex) {
//    int currentFirst = myArray[startIndex];
//    int currentLast = myArray[endIndex];

//    myArray[endIndex] = currentFirst;
//    myArray[startIndex] = currentLast;

//    startIndex++;
//    endIndex--;
// }

//   for (int i = 0; i < length; ++i) {
//       cout << myArray[i] << " ";
//   }
//   cout << endl;

int main()
{
  int myArray[] = {1, 2, 3, 4, 5};
  int length = sizeof(myArray) / sizeof(int);

 
  for (int i = 0; i < length; i++)
  {
    for (int j = i; j < length; j++)
    { int sum = 0;
      for(int start = i; start < j; start++) {
          sum += myArray[start];
      }
      cout << sum <<endl;
    }
    cout <<endl;
  }

  return 0;
}
