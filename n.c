/* remove the duplicate elements in an array */
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
    /* check for duplicate elements */
    if(n>1)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    a[j]=0;
                }
            }
        }
    }
    /* print the array */
    printf("The array after removing the duplicate elements is\n");
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d\n",a[i]);
        }
    }
    getch();
    return 0;
}