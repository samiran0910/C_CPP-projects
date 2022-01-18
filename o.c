/* print the array in reverse order */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,n;
    printf("Enter the number of elements max limit is 20\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    scanf("%d",&a[0]);
    /* print the array in reverse order */
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array in reverse order is\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    getch();
    return 0;
}