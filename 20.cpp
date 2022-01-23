//Write a program to calculate GCD of two numbers
// using recursion.
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
//driver code
int main()
{
    int a,b;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
    return 0;
}


//using iteration
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
//driver code
int main()
{
    int a,b;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
    return 0;
}