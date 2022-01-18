/* calculate and print the sum and average of the elements of an array entered by user*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,n;
    float sum=0,avg;
    printf("Enter the number of elements max limit is 20\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    avg=sum/n;
    printf("The sum of the elements is %f\n",sum);
    printf("The average of the elements is %f\n",avg);
    getch();
    return 0;
}