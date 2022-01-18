/* Write a program that swaps two numbers using pointers. */
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int *p1 = &a, *p2 = &b;
    cout << "Before swapping: " << a << " " << b << endl;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}