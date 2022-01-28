
// Write a program to calculate Factorial of a number 
//using recursion.
#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
//using iteration
int fact1(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
        fact=fact*i;
    return fact;
}
//create a menu
int main()
{
    int n,ch;
    cout<<"1.factorial using recursion"<<endl;
    cout<<"2.factorial using iteration"<<endl;
    cout<<"3.exit"<<endl;
    cin>>ch;
    cout<<"enter the number"<<endl;
    cin>>n;
    switch(ch)
    {
        case 1:
            cout<<"factorial of "<<n<<" is "<<fact(n)<<endl;
            break;
        case 2:
            cout<<"factorial of "<<n<<" is "<<fact1(n)<<endl;
            break;
        case 3:
            exit(0);
            break;
        default:
            cout<<"invalid choice"<<endl;
    }
    return 0;
}