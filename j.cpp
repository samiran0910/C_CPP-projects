// write a program to perform actions on an array entered by user
# include <iostream>
using namespace std;
//function to take input from user
void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
        
    }
}
// function to print the even valued elements
void even(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            cout << a[i] << " "<<endl;
    }
}
// function to print the odd valued elements
void odd(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            cout << a[i] << " "<<endl;
    }
}
// calculate and print the sum of all the elements
void sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << "Sum of all elements is: " << sum << endl;
}
// print the largest element
void maxmin(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    cout << "Max element is: " << max << endl;

    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    cout << "Min element is: " << min << endl;
}
// print the smallest element
/*void smallest(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    cout << "Smallest element is: " << min << endl;
}*/

// remove the duplicate elements from the array and print the array
void remove (int a[], int n)
{
    int i,j;
    
    if (n == 0)
    {
        cout << "Array is empty" << endl;
        //return;
    }
    if (n > 1)
    {
        for (i=0;i<n;i++)
        {
            for (j = i+1;j<n;j++)
            {
                if (a[i] == a[j])
                {
                    a[j]=0;
                }
            }
        }
    }
    cout << "The array after removing the duplicates is: ";
    for (i=0;i<n;i++)
    {
        if (a[i]!=0)
        {
            cout<<a[i]<<flush;
            //cout<<endl;
        }
    }
   // return;
}

// print the array in reverse order
void reverse(int a[], int n){
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" "<<endl;
    }
}
// driver function with menu with choice to re enter the array
int main()
{
    int n, choice;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    do
    {
        cout << "\n1. Input the array" << endl;
        cout << "2. Print the even elements" << endl;
        cout << "3. Print the odd elements" << endl;
        cout << "4. Print the sum of all elements" << endl;
        cout << "5. Print the maximum and minimum element" << endl;
       // cout << "6. Print the smallest element" << endl;
        cout << "7. Remove the duplicate elements" << endl;
        cout << "8. Print the array in reverse order" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            input(a, n);
            break;
        case 2:
            even(a, n);
            break;
        case 3:
            odd(a, n);
            break;
        case 4:
            sum(a, n);
            break;
        case 5:
            maxmin(a, n);
            break;
        /*case 6:
            smallest(a, n);
            break;*/
        case 7: 
            remove(a,n);
            break;
        case 8:
            reverse(a,n);
            break;
        case 9:
            cout<<"Quitting......."<<endl;
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 9);
    return 0;
}