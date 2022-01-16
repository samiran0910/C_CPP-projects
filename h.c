/* Write a macro that swaps two numbers*/
#include <stdio.h>
#define SWAP(a,b) {int temp; temp = a; a = b; b = temp;}
int main()
{
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    printf("before swapping\na = %d\nb = %d\n",a,b);
    SWAP(a,b);
    printf("after swapping a = %d and b = %d\n",a,b);
    return 0;
}
