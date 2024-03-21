#include <iostream>
using namespace std;

int main(){
// using pointers
int a = 90;
int *p;
p = &a;

cout << p << endl; //prints the address
cout << &a << endl; //prints the address
cout << &p << endl; //prints the address of p

// dereferencing
cout << *p << endl; //prints the value
    return 0;
}