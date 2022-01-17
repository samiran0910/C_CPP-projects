/*Write a program to print a triangle of stars as follows (take number of lines from user):*/
#include<stdio.h>
#include<conio.h>
int main() 
{
    int row, space, rows, star=0;
    printf("Enter the number of rows in pyramid\n");
    scanf("%d",&rows);
 
    for(row = 1;row <= rows; row++) 
    {
     /* Printing spaces */
        for(space = 1; space <= rows-row; space++) 
        {
           printf("  ");
        }
        /* Printing stars */
        while(star != (2*row - 1)) 
        {
            printf("* ");
            star++;;
        }
        star=0;
        printf("\n");
    }
    getch();
    return 0;
}