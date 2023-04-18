// https://www.geeksforgeeks.org/decision-making-c-cpp/


// C++ program to illustrate if-else statement
#include <iostream>
using namespace std;

int main()
{
  
  //if-else in C/C++ 
	int i = 20;

	if (i < 15)
		cout << "i is smaller than 15";
	else
		cout << "i is greater than 15";

  //nested-if in C/C++
	i = 10;

	if (i == 10) {
		// First if statement
		if (i < 15)
			cout << "i is smaller than 15\n";

		// Nested - if statement
		// Will only be executed if
		// statement above is true
		if (i < 12)
			cout << "i is smaller than 12 too\n";
		else
			cout << "i is greater than 15";
	}
  //if-else-if ladder in C/C++

	i = 20;

	if (i == 10)
		cout << "i is 10";
	else if (i == 15)
		cout << "i is 15";
	else if (i == 20)
		cout << "i is 20";
	else
		cout << "i is not present";



	return 0;
}
