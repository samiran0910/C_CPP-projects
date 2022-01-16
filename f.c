/* write a function to find weather a given number is prime or not. Use the same to generate the prime numbers less than 100 */
#include <stdio.h>
/*#include <conio.h>*/
int main()
{
    int i,j,n,flag=0;
    printf("Enter the number to check prime or not\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    printf("%d is ",n);
    if(flag==0)
        printf("prime\n");
    else
        printf("not prime\n");
    getch();
    printf("The prime numbers less than 100 are\n");
    for (int i = 2; i < 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
            else if (j == i - 1)
                printf("%d\n", i);
        }
    }
    return 0;
}
