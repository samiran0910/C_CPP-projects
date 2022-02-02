/*write a menu driven program to perform the following operations on strings;*/

#include<stdio.h>
#include<string.h>
char *getString(char *str)
{
	char *p;
	p=str;
	while(*p!='\0')
	{
		if(*p>='a'&&*p<='z')
		{
			*p=*p-32;
		}
		p++;
	}
	return str;
}

void
con()
{
    char a[100], b[50];
    
    printf("Enter the first string\n");
    scanf("%s",&a);
    
    printf("Enter the second string\n");
    
    scanf("%s",&b);
    
    strcat(a,b);
    
    printf("String obtained on concatenation is %s\n",a);
    
    return;

}

 
int
compare (char *str1, char *str2) 
{
  
int i;
  
for (i = 0; str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]; i++);
  
return (str1[i] - str2[i]);

}


void
stringlowercase (char *s) 
{
  
int i;
  
 
for (i = 0; s[i]; i++)
    
    {
      
if (s[i] >= 65 && s[i] <= 90)
	
s[i] += 32;
    
}

}

void 
stringuppercase (char *s)
{
	int i;
	for (i=0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
}


int
countvowel (char *str) 
{
  
int i, count = 0;
  
for (i = 0; str[i] != '\0'; i++)
    
    {
      
 
if (str[i] == 'a' || 
str[i] == 'e' || 
str[i] == 'i'
	     || 
str[i] == 'o' || 
str[i] == 'u')
	
	{
	  
 
count++;
	
}
    
}
  
return count;

}


void
reverse (char *str) 
{
  
int i, j;
  
char t;
  
for (i = 0; str[i] != 0; i++);
  
 
 
for (i = i - 1, j = 0; i > j; i--, j++)
    
    {
      
t = str[i];
      
str[i] = str[j];
      
str[j] = t;
    
}
  
return;

}


int main()
{
	char str[100];
	int ch;
	do
	{
		printf("Enter the string\n");
		scanf("%s",str);
		printf("\n1. Show address of each character in string\n");
		printf("\n2. Concatenate two strings \n");
		printf("\n3. Concatenate two strings using strcat function\n");
		printf("\n4. Compare two strings\n");
		printf("\n5. Calculate length of the string \n");
		printf("\n6. Convert all lowercase characters to uppercase\n");
		printf("\n7. Convert all uppercase characters to lowercase\n");
		printf("\n8. Calculate number of vowels\n");
		printf("\n9. Reverse the string\n");
		printf("\nAny other to quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Address of each character in string is %p\n",str);
				break;
			case 2:
				con();
				break;
			case 3:
				printf("String obtained on concatenation is %s\n",strcat(str," "));
				break;
			case 4:
				printf("String comparison is %d\n",compare(str," "));
				break;
			case 5:
				printf("Length of the string is %d\n",strlen(str));
				break;
			case 6:
				stringlowercase(str);
				printf("String after conversion is %s\n",str);
				break;
			case 7:
				stringuppercase(str);
				printf("String after conversion is %s\n",str);
				break;
			case 8:
				printf("Number of vowels in the string is %d\n",countvowel(str));
				break;
			case 9:
				reverse(str);
				printf("String after reversal is %s\n",str);
				break;
			default:
				printf("Quitting\n");
				break;
		}
	}while(ch!=10);
	return 0;
}