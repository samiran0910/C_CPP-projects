// write a program to display fibonacci seriees 
// using recursion
#include<iostream>
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
 
// using iteration

void itt()
{
  int n, first = 0, second = 1, result, i;
  cout<<"Enter the number of terms : "<<endl;
  cin>>n;
  cout<<"Fibonacci Series is: "<<endl;
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
    cout<<"\t" <<result;
  } 
}

int main(){
  //menu for user to choose the option of fibonacci series 
  int choice;
  cout<<"Enter the choice of fibonacci series"<<endl;
  cout<<"1.Recursion"<<endl;
  cout<<"2.Iteration"<<endl;
  cin>>choice;
  switch(choice){
    case 1:
      f(5);
      break;
    case 2:
      itt();
      break;
    default:
      cout<<"Invalid choice"<<endl;
  }
  return 0;
}