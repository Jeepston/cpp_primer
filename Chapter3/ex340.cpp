/*
  Exercise 3.40: Write a program to define two character arrays initialized
  from string literals. Now define a third character array to hold the concatenation
  of the two arrays. Use strcpy and strcat to copy the two arrays into the third
*/

#include <iostream>

using namespace std;

int main() {

  const char s1[] = "String 1";
  const char s2[] = " String 2";
  char s3[19];

  strcpy(s3, s1);
  strcat(s3, s2);

  cout << s1 << " + " << s2 << " = " << s3 << endl;

  return 0;
}
