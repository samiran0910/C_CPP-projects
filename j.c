/* write a program to perform actions on an array entered by user*/
/* print the even values elements */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,n;
    printf("Enter the number of elements max limit is 20\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The even elements are\n");
    for(j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            printf("%d\n",a[j]);
        }
    }
    getch();
    return 0;
}