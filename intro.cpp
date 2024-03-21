#include <iostream>
using namespace std;

int main(){
// using pointers
int a = 90;
int *p;
p = &a;
*p =13;

double gpa = 2.56;
double* pGpa = &gpa; //Pointer to gpa

cout << *pGpa << endl; //2.56

// pointer arithmetic
cout << *pGpa  + 1<< endl; //3.56
cout << *(pGpa  + 1)<< endl; //garbage value
cout << sizeof(int) << endl; //4 bytes
cout << pGpa  + 1<< endl; //3.56


cout << p << endl; //prints the address
cout << &a << endl; //prints the address
cout << &p << endl; //prints the address of p

// dereferencing
cout << *p << endl; //prints the value
    return 0;
}