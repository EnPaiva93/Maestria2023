// C++ Program to demonstrate working of a function
#include <iostream>
using namespace std;

// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
void sum5(int& x, int& y)
{
	if (x > y)
		return y+5;
	else
		return x+5;
}

void fun(int* ptr) { *ptr = 30; }

// main function that doesn't receive any parameter and
// returns integer
int main()
{
	int a = 10, b = 20;

	// Calling above function to find max of 'a' and 'b'
	int m = max(a, b);
	cout << "m is " << m << endl;
  
  cout << "a is " << a << endl;
  cout << "b is " << b << endl;
  sum5(a,b);  
  cout << "a is " << a << endl;
  cout << "b is " << b << endl;
  
  fun(b);
  cout << "b is " << b << endl;
  
	return 0;
}
