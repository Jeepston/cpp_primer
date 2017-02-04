/*
Exercise 5.23: Write a program that reads two integers from the standard input
and prints the result of dividing the first number by the second.

Exercise 5.24: Revise your program to throw an exception if the second number
is zero. Test your program with a zero input to see what happens on your
system if you don’t catch an exception.

Exercise 5.25: Revise your program from the previous exercise to use a try
block to catch the exception. The catch clause should print a message to the
user and ask them to supply a new number and repeat the code inside the try.
*/

#include <iostream>
#include <stdexcept>

using namespace std;

int main() {

  int i1, i2;
  cout << "Provide two integers: " << endl;
  while (cin >> i1 >> i2) {

    try {
      if (i2 == 0) {
          throw runtime_error("Division by zero!");
        }
        cout << i1 << " / " << i2 << " = " << i1/i2 << endl;
    }
    catch (runtime_error err) {
      cout << err.what() << "\nTry Again? Enter y or n" << endl;
      char c;
      cin >> c;
      if (!cin || c == 'n')
        break; // break out of the while loop
    }
  }
  return 0;
}
