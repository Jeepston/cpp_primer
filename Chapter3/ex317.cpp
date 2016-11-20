//Exercise 3.17: Read a sequence of words from cin and store the values in a vector.
//After you read all the words, process the vector and change each word to uppercase.
//Print the transformed elements, eight words to a line


#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main() {

  vector<string> v;
  string s;

  while (cin >> s) {
    v.push_back(s);
  }

  cout << endl;

  for (auto &s : v) {
    for (auto &c : s) {

      c = toupper(c);
    }

  }

  int wordsPerLine = 8;
  int words = 0;

  for (auto s : v) {

    cout << s;
    words++;
    if (words == wordsPerLine) {

      words = 0;
      cout << endl;
    }
    else {
      cout << " ";
    }
  }

  cout << endl;
  return 0;
}
