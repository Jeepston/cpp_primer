//Exercise 3.16: Write a program to print size and contents of the vectors


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  vector<int> v1; //empty
  vector<int> v2(10); //10 elements of 0
  vector<int> v3(10, 42); //10 elements of 42
  vector<int> v4{10}; //1 element  of 10
  vector<int> v5{10, 42}; //two elements - 10, 42
  vector<string> v6{10}; //10 empty strings
  vector<string> v7{10, "hi"}; //10 strings of "hi"

  cout << "v1" << endl;
  cout << "Size: " << v1.size() << endl;
  cout << "Contents:" << endl;

  for (auto e : v1) {

    cout << e << endl;
  }

  cout << endl;


  cout << "v2" << endl;
  cout << "Size: " << v2.size() << endl;
  cout << "Contents:" << endl;

  for (auto e : v2) {

    cout << e << endl;
  }

  cout << endl;



  cout << "v3" << endl;
  cout << "Size: " << v3.size() << endl;
  cout << "Contents:" << endl;

  for (auto e : v3) {

    cout << e << endl;
  }

  cout << endl;


  cout << "v4" << endl;
  cout << "Size: " << v4.size() << endl;
  cout << "Contents:" << endl;

  for (auto e : v4) {

    cout << e << endl;
  }

  cout << endl;




  cout << "v5" << endl;
  cout << "Size: " << v5.size() << endl;
  cout << "Contents:" << endl;

  for (auto e : v5) {

    cout << e << endl;
  }

  cout << endl;


  cout << "v6" << endl;
  cout << "Size: " << v6.size() << endl;
  cout << "Contents:" << endl;

  for (auto e : v6) {

    cout << e << endl;
  }

  cout << endl;



  cout << "v7" << endl;
  cout << "Size: " << v7.size() << endl;
  cout << "Contents:" << endl;

  for (auto e : v7) {

    cout << e << endl;
  }

  cout << endl;






  return 0;
}
