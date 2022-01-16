/*write a program to compute the factors of a number*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}