//Exercise 3.6: Use a range for to change all the characters in a string to X

#include <iostream>
#include <string>

using namespace std;

int main() {

  const string s = "Keep out!";
  //cin >> s;

  for (auto &c : s) {
      //c = 'X';
  }

  cout << endl << s << endl;
  return 0;
}
