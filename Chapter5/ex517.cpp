/*
Exercise 5.17: Given two vectors of ints, write a program to determine whether
 one vector is a prefix of the other. For vectors of unequal length, compare
 the number of elements of the smaller vector. For example, given the vectors
 containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program
 should return true.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v1 = {0, 1, 1, 2};
  vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};

  vector<int> prefixV;
  vector<int> mainV;

   if (v1.size() < v2.size()) {

     prefixV = v1;
     mainV = v2;
   }
   else {
     prefixV = v2;
     mainV = v1;
   }

  auto sz = prefixV.size();
  bool result = true;
  for (vector<int>::size_type sz = 0; sz != prefixV.size(); ++sz) {

    if (prefixV[sz] != mainV[sz]) {
      result = false;
      break;
    }
  }

  cout << (result ? "true" : "false") << endl;

  return 0;
}
