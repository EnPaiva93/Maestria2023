// CPP Program to demonstrate the Binary Operators
#include <iostream>
using namespace std;

int main()
{
	int a = 8, b = 3;

	// Addition operator
	cout << "a + b = " << (a + b) << endl;

	// Subtraction operator
	cout << "a - b = " << (a - b) << endl;

	// Multiplication operator
	cout << "a * b = " << (a * b) << endl;

	// Division operator
	cout << "a / b = " << (a / b) << endl;

	// Modulo operator
	cout << "a % b = " << (a % b) << endl;

	// Equal to operator
	cout << "a == b is " << (a == b) << endl;

	// Greater than operator
	cout << "a > b is " << (a > b) << endl;

	// Greater than or Equal to operator
	cout << "a >= b is " << (a >= b) << endl;

	// Lesser than operator
	cout << "a < b is " << (a < b) << endl;

	// Lesser than or Equal to operator
	cout << "a <= b is " << (a <= b) << endl;

	// true
	cout << "a != b is " << (a != b) << endl;

	// Logical AND operator
	cout << "a && b is " << (a && b) << endl;

	// Logical OR operator
	cout << "a ! b is " << (a > b) << endl;

	// Logical NOT operator
	cout << "!b is " << (!b) << endl;

  // Binary a
  bitset<8> xa(a);
  cout << "a is " << xa << endl;
  
  // Binary a
  bitset<8> xb(a);
  cout << "b is " << xb << endl;  
  
	// Binary AND operator
	cout << "a & b is " << (a & b) << endl;

	// Binary OR operator
	cout << "a | b is " << (a | b) << endl;

	// Binary XOR operator
	cout << "a ^ b is " << (a ^ b) << endl;

	// Left Shift operator
	cout << "a>>1 is " << (a >> 1) << endl;

	// Right Shift operator
	cout << "a<<1 is " << (a << 1) << endl;

	// One’s Complement operator
	cout << "~(a) is " << ~(a) << endl;

	// Assignment Operator
	cout << "a = " << a << endl;

	// Add and Assignment Operator
	cout << "a += b is " << (a += b) << endl;

	// Subtract and Assignment Operator
	cout << "a -= b is " << (a -= b) << endl;

	// Multiply and Assignment Operator
	cout << "a *= b is " << (a *= b) << endl;

	// Divide and Assignment Operator
	cout << "a /= b is " << (a /= b) << endl;

	return 0;
}
