// more pointers
#include <iostream>
using namespace std;
int main () {
int firstvalue = 5, secondvalue = 15; int * p1, * p2;
p1 = &firstvalue; p2 = &secondvalue; *p1 = 10;
*p2 = *p1;
p1 = p2; *p1 = 20;
// p1 = address of firstvalue
// p2 = address of secondvalue
// value pointed by p1 = 10
// value pointed by p2 = value pointed by
// p1 = p2 (value of pointer is copied) // value pointed by p1 = 20
cout << "firstvalue is " << firstvalue << endl; cout << "secondvalue is " << secondvalue << endl; return 0;
}

int numbers [20];
int * p;

p = numbers;