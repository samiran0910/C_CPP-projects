/* write a function that checks if a string is a palindrome or not . Use this function to check if the string entered by user is a palindrome or not .*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    printf("Enter the string\n");
    scanf("%s",str);
    i=strlen(str);
    j=i;
    k=i-1;
    for(k=0;k<i;k++)
    {
        if(str[k]==str[i-1])
        {
            printf("%s is a palindrome\n",str);
            break;
        }
        else
        {
            printf("%s is not a palindrome\n",str);
            break;
        }
    }
    return 0;
}