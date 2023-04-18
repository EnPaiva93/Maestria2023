// https://www.geeksforgeeks.org/cpp-data-types/

/*
Primitive Data Types

    Integer: The keyword used for integer data types is int. Integers typically require 4 bytes of memory space and range from -2147483648 to 2147483647.  
    Character: Character data type is used for storing characters. The keyword used for the character data type is char. Characters typically require 1 byte of memory space and range from -128 to 127 or 0 to 255.  
    Boolean: Boolean data type is used for storing Boolean or logical values. A Boolean variable can store either true or false. The keyword used for the Boolean data type is bool. 
    Floating Point: Floating Point data type is used for storing single-precision floating-point values or decimal values. The keyword used for the floating-point data type is float. Float variables typically require 4 bytes of memory space. 
    Double Floating Point: Double Floating Point data type is used for storing double-precision floating-point values or decimal values. The keyword used for the double floating-point data type is double. Double variables typically require 8 bytes of memory space. 
    void: Void means without any value. void data type represents a valueless entity. A void data type is used for those function which does not return a value. 
    Wide Character: Wide character data type is also a character data type but this data type has a size greater than the normal 8-bit data type. Represented by wchar_t. It is generally 2 or 4 bytes long.
    sizeof() operator: sizeof() operator is used to find the number of bytes occupied by a variable/data type in computer memory.
*/

// C++ Program to Demonstrate the correct size
// of various data types on your computer.
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	cout << "Size of double : " << sizeof(double) << endl;
  
        cout << "Size of char : " << sizeof(char) << " byte"<< endl;

	cout << "char minimum value: " << CHAR_MIN << endl;

	cout << "char maximum value: " << CHAR_MAX << endl;

	cout << "Size of int : " << sizeof(int) << " bytes"
		<< endl;

	cout << "Size of short int : " << sizeof(short int)
		<< " bytes" << endl;

	cout << "Size of long int : " << sizeof(long int)
		<< " bytes" << endl;

	cout << "Size of signed long int : "
		<< sizeof(signed long int) << " bytes" << endl;

	cout << "Size of unsigned long int : "
		<< sizeof(unsigned long int) << " bytes" << endl;

	cout << "Size of float : " << sizeof(float) << " bytes"
		<< endl;

	cout << "Size of double : " << sizeof(double)
		<< " bytes" << endl;

	cout << "Size of wchar_t : " << sizeof(wchar_t)
		<< " bytes" << endl;
  
	return 0;
}
 
