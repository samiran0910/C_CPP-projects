/* Write a program to compute the sum of the first n terms of the following series : S = 1 + 1/2 + 1/3 +1/4 .... */
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1.0/i;
    }
    printf("The sum of the series is : %f",sum);
    return 0;
}