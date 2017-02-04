/*
Exercise 5.14: Write a program to read strings from standard input looking
for duplicated words. The program should find places in the input where
one word is followed immediately by itself. Keep track of the largest number
of times a single repetition occurs and which word is repeated. Print the
maximum number of duplicates, or else print a message saying that no word
was repeated. For example, if the input is

how now now now brown cow cow

the output should indicate that the word now occurred three times.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

  int currentCount = 1;
  int maxCount = 1;
  string currentString;
  string maxWord;
  string s;
  while (cin >> s) {

    if (currentString == s) {

      ++currentCount;
    }
    else {

      if (currentCount > 1 && currentCount > maxCount) {

          maxCount = currentCount;
          maxWord = currentString;
      }
      else {

        currentCount = 1;
      }
    }

    currentString = s;
  }

  cout << "Word " + maxWord + " ossurred " << maxCount << " times." << endl;

  return 0;

}
