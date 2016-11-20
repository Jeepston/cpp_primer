//Exercise 3.2: Write a program to read standard input a line at a time.
//A word at a time

#include <iostream>
#include <string>

using namespace std;

int main() {

  string s;
  while (cin >> s) {
  // while (getline(cin, s)) {

    //output line
    cout << s << endl;
  }

  return 0;
}
