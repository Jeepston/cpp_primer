//Exercise 3.5: Write a program to read strings from the standard input, concatenating
//what is read into one large string. Print the concatenated string. Next, change
//the program to separate adjacent input strings by space

#include <iostream>
#include <string>

using namespace std;

int main() {

  string s;
  string result;

  while (cin >> s) {
    if (result.empty()) {
      //firs input - no need for space
      result += s;
    }
    else {
      result += " " + s;
    }
  }

  cout << endl << result << endl;
  return 0;
}
