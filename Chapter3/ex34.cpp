//Exercise 3.4: Write a program to read two strings
//and report whether the strings are equal. If not, report
//which of the two is larger. Now, change the program to report
//whether the strings have the same length, and if not, report which is longer

#include <iostream>
#include <string>

using namespace std;

int main() {

  string s1, s2;
  cout << "Enter two strings:" << endl;
  cin >> s1 >> s2;

  //compare strings
  if (s1 == s2) {

    cout << endl << "Strings are equal" << endl;
  }
  else if (s1 < s2) {

    cout << endl << s2 + " is larger than " + s1 << endl;
  }
  else {

    cout << endl << s1 + " is larger than " + s2 << endl;
  }

  //compare lengths
  cout << endl << endl;

  if (s1.size() == s2.size()) {

    cout << endl << "Strings are of equal length" << endl;
  }
  else if (s1.size() < s2.size()) {

    cout << endl << s2 + " is longer than " + s1 << endl;
  }
  else {

    cout << endl << s1 + " is longer than " + s2 << endl;
  }


  return 0;
}
