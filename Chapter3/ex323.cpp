//Excercise 3.23: Write a program to create a vector with ten int elements. Using an iterator,
// assign each element a value that is twice its current value. Print the vector

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = v.begin(); it != v.end(); ++it) {

        *it = (*it) * 2;
    }

    //print the vector
    for (auto it = v.begin(); it != v.end(); ++it) {

        cout << *it << endl;
    }
}
