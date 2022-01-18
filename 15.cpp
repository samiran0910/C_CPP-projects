#include<bits/stdc++.h>
using namespace std;
main ()
{
  ios_base::sync_with_stdio (false);
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
