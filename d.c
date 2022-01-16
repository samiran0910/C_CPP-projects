/* Write a program to compute the sum of the first n terms of the following series : S = 1-2+3-4+5....*/
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("The sum of the series is : %d",sum);
    return 0;
}