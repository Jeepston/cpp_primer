//Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair
//of adjacent elements. Change your program so that it prints the sum of the first
//and the last elements, followed by the sum of second and second-to-last and so on.

#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v;
  int i;

  while (cin >> i) {
    v.push_back(i);
  }

  auto size = v.size();

  cout << "Sums of adjucent pairs: " << endl;
  for (decltype(v.size()) i = 0; i < size - 1; i++) {

    int s = v[i] + v[i + 1];
    cout << "Sum of " << i << " and " << i + 1 << " = "  << s << endl;
  }
  cout << endl << endl;

  cout << "Sums of pairs from beginning and end: " << endl;
  for (decltype(v.size()) i = 0; i < size / 2; i++) {

    int ind = size - 1 - i;
    int s = v[i] + v[ind];
    cout << "Sum of " << i << " and " << ind << " = "  << s << endl;
  }


  return 0;
}
