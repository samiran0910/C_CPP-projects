#include<iostream>
#include<cstring>
using namespace std;
int palindrome(char str[10]){
    
   // cin>>str;
    int f =0;
    int l = strlen(str)-1;
    while (l>0){
        if(str[f++]!=str[l--]){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
    return 0;
}
int main()
{
    char st[10];
    cin>>st;
   
    palindrome(st);
    return 0;
}
