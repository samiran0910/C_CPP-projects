// write a program to display fibonacci seriees 
// using recursion
#include<iostream>
using namespace std;
int fibrec(int n)
{
  if(n==0)
    return 0;
  if(n==1)
    return 1;
  return fibrec(n-1)+fibrec(n-2);
}
// using iteration

void fibit()
{
  int n, first = 0, second = 1, result, i;
  cout<<"Enter the number of terms : "<<flush;
  cin>>n;
  cout<<"Fibonacci Series using iteration is: "<<endl;
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
  int choice;
  int n;
  cout<<"Enter the choice of fibonacci series"<<endl;
  cout<<"1.Recursion"<<endl;
  cout<<"2.Iteration"<<endl;
  cin>>choice;
  
  switch(choice){
    case 1:
      cout <<"enter the number of terms: "<<flush;
      cin>>n;
      cout<<"Fibonacci series using recursion is: "<<endl;
      for(int i=0;i<n;i++)
      {
        cout<<"\t"<<fibrec(i);
      }
      break;
    case 2:
      fibit();
      break;
    default:
      cout<<"Invalid choice"<<endl;
  }
  return 0;
}