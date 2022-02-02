//write a program to find the sum of  elements entered by the user. To write this programme 
//allocate memory dynamically using malloc or calloc functions or new operator.
#include<iostream>
using namespace std;
int main ()
{
  int n, sum = 0;
  int *a = new int (n);
  cout << "Enter the number of elements:";
  cin >> n;
  cout << "Enter the elements:";
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
  cout << "Sum:"<<sum;
}
