#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    int i,j,k,found,freq;
    
    if(argc<2)
        printf("Too few arguments....");
        else
        {
            for(i=0;argv[1][i]!=0;i++)
            {
                found=0;
                /*check whether frequency of the alphabet is already calculates*/
                for(k=0;k<i;k++)
                    if(argv[1][k]==argv[1][i])
                    {
                        found=1;
                        break;
                    }
                    /*if not calculated and it is an alphabet then proceed*/
                    if(!found && isalpha(argv[1][i]))
                    {
                        freq=1;
                        for(j=i+1;argv[1][j]!=0;j++)
                            if(argv[1][j]==argv[1][i])
                                freq++;
                        printf("\n %c occurs %d times",argv[1][i],freq);
                    }
                    
            }
        }
 return 0;
}