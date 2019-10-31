// Arrays
    // list of elements
    // all elements have teh same data type
    // the elements are located adjacent to each toehr in memory
    // like all variables in C++, you must declare an array berfore using it
    int scores[3]; // when you declare an array like this, you will have junk values inside
    // length of the array is not stored anywhere
    // the variable scores refers to the starting location of the array
    // scores 0x2000 is the location of the first element of the array for example
    // the next location is 0x2004 because an integer is 4 bytes
    // elements of an array are indexed

#include <iostream>
using namespace std;

void printArray(int* sc) { // sc is a pointer to an int, sc stores base address
    for(int i = 0; i < 3; i++) {
        cout << sc[i] << endl;
    }
    for(int item:sc) { // when using a range based for loop in a function, since the array was never declared in the function, the function doesn't know how long the array is
        cout << item << endl;
    }
}

int main() {
    int scores[] = {10, 20, 50};
    // declare an initialize
    cout << scores[0] << endl; // first element of the array
    cout << scores << endl; // prints the memory location
    scores = scores + 5; // you cannot do this
    // scores is the base address of the array
    // you cannot change the value of scores
    for(int i = 0; i < 3; i++) {
        cout << scores[i] << endl;
    }
    // range based for loop
    for(int item:scores) { // need the --std=c++11 for range based for loop
        cout << item << endl;
    }

    // out of bounds error
    for(int i = 0; i <= 3; i++) {
        cout << scores[i] << endl;
    }
    // when you access scores[3] you get undefined behavior

    printArray(scores);

    return 0;
}

// sample Makefile
// all: arrays arrays2
    // ./arrays2
// arrays: arrays.cpp
    // g++ --std=c++11 arrays.cpp -o arrays
// arrays2: arrays2.cpp
    // g++ --std=c++11 arrays.cpp -o arrays
// clean:
    // rm array

// when calling "Make", does the first command, and if it relies on any others, then it does those commands as well


// pointers: a variable that contains the address of another variable
// declaration: type * pointer_name
int* p; // declare
// p is a pointer to an integer
// p stores the location of an integer

// to make a pointer point to something
int *p;
int y = 3;
p = &y;
// to access the location of a variable, use the address operator &
// &y is the address of y

// to get the value of the thing p points to, need to dereference with *p
cout << *p;
// this prints out 3, which is the value of y

// cannot do this because they are different types
p = y;

// if you do
*p = 10;
// then y = 10

