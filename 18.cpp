// write a program to display fibonacci seriees 
// using recursion
#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (f(n-1)+f(n-2));
}
main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cout<<"\t"<<f(i);
    
}   

// using iteration
#include <stdio.h>
#include <conio.h> 
int main()
{
  int n, first = 0, second = 1, result, i;
  printf("Please give an input upto you want to print series : \n");
  scanf("%d", &n);
  printf("Fibonacci Series is:\n");
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      result = i;
    else
    {
      result = first + second;
      first = second;
      second = result;
    }
    printf("%d\n", result);
  } 
  return 0;
} 