/* print the maximum and minimum of the elements of an array*/
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
    int max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The maximum element is %d\n",max);
    printf("The minimum element is %d\n",min);
    getch();
    return 0;
}
