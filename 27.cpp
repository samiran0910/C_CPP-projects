//Write a function that reverses the elements of an array in place. The function must accept only one pointer value and return void.
#include <iostream>
using namespace std;
void reverse(int *arr, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
}
int main() 
{ 
    int length=5; 
    int arr[]={1,2,3,4,5}; 
    reverse(arr,length); 
    cout<<"Reversed array is: ";
    for(int i=0;i<length;i++) 
        cout<<arr[i]<<" ";
    return 0; 
} 
