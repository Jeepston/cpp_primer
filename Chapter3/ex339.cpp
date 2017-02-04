/*
  Exercise 3.39: Write a program to compare two strings.
  Now write a program to compare the values of two C-style character strings.
*/


#include <iostream>
#include <string>

using namespace std;

int main() {

  string s1 = "String 3";
  string s2 = "String 2";

  if (s1 < s2) {

    cout << "'" + s1 + "' is less than '" + s2 + "'" << endl;
  }
  else if (s1 > s2) {

    cout << "'" + s1 + "' is larger than '" + s2 + "'" << endl;
  }
  else {

    cout << "Strings are equal" << endl;
  }

  const char cs1[] = "C String 3";
  const char cs2[] = "C String 2";

  int result = strcmp(cs1, cs2);

  if (result < 0) {

    cout << "'" << cs1 << "' is less than '" << cs2 << "'" << endl;
  }
  else if (result > 0) {

    cout << "'" << cs1 << "' is greater than '" << cs2 << "'" << endl;
  }
  else {

    cout << "C Strings are equal" << endl;
  }


  return 0;
}
