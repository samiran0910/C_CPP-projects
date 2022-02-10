/* write a function that checks if a string is a palindrome or not . Use this function to check if the string entered by user is a palindrome or not .*/
#include <iostream>

using namespace std;

int palindrome(string str)
{
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (palindrome(str))
        cout <<str<< " is a palindrome";
    else
        cout <<str<< " is not a palindrome";
    return 0;
}