/* write a program in which a function is passed address of two variables and then alter its contents. */
#include <iostream>
using namespace std;
void alter(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    cout << "Before alter: a = " << a << " b = " << b << endl;
    alter(&a, &b);
    cout << "After alter: a = " << a << " b = " << b << endl;
    return 0;
}
