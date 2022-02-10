// write a fumction to find weather a given number is prime or not. Use the same to print all the prime numbers between 1 to 100.
#include <iostream>
using namespace std;
int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    if (prime(n))
        cout << n << " is a prime number"<<endl;
    else
        cout << n << " is not a prime number"<<endl;
    for (i = 2; i <= 100; i++)
    {
        if (prime(i))
            cout << i << " ";
    }
    return 0;
}