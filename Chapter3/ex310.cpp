//Exercise 3.10: Write a program that reads a string of characters including punctuation
//and writes what was read but with the pucntuation removed

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

  string input, filtered;
  cin >> input;

  for (auto c : input) {

    if (!ispunct(c)) {

      filtered += c;
    }
  }

  cout << endl << filtered << endl;

  return 0;
}
