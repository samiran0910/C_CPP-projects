/*Write a program to print the sum and product of digits of an integer.*/
#include<stdio.h>
int main()
{
    int n,sum=0,rem, prod=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+n%10;
        rem=n%10;
        prod*= rem;
        n/=10;
    }
    printf("Sum of digits:%d\n",sum);
    printf("Product of digits:%d\n",prod);
    return 0;
}