// https://www.geeksforgeeks.org/cpp-loops/

// C++ program to Demonstrate for loop
#include <iostream>
using namespace std;

int main()
{
  //simple loop
	for (int i = 1; i <= 5; i++) {
		cout << "Hello World\n";
	}
  
  //array loop
  int arr[] {40, 50, 60, 70, 80, 90, 100};
  for (auto element: arr){
    cout << element << " ";
  }
  
  //composite loop
	for (int i = 0, j = 10, k = 20; (i + j + k) < 100;
		j++, k--, i += k) {
		cout << i << " " << j << " " << k << "\n";
	}
	return 0;
 
  //while
  // initialization expression
  int i = 1;

  // test expression
  while (i < 6) {
      cout << "Hello World\n";

      // update expression
      i++;
  }
  
  int i = 2; // Initialization expression

  do {
      // loop body
      cout << "Hello World\n";

      // update expression
      i++;

  } while (i < 1); // test expression
  
}

