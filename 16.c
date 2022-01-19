#include<stdio.h>
#include<string.h>
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


int
menu () 
{
  
int option;
  
printf ("\n1. Show address of each character in string");
  
printf ("\n2. Concatenate two strings ");
  
printf ("\n3. Concatenate two strings using strcat function");
  
printf ("\n4. Compare two strings");
  
printf ("\n5. Calculate length of the string ");
  
printf ("\n6. Convert all lowercase characters to uppercase");
  
printf ("\n7. Convert all uppercase characters to lowercase");
  
printf ("\n8. Calculate number of vowels");
  
printf ("\n9. Reverse the string");
  
printf ("\nAny other to quit");
  
scanf ("%d", &option);
  
return option;

}


int
main () 
{
  
char str1[100], str2[100];
  
int option;
  
  do
    
    {
      
option = menu ();
      
switch (option)
	
	{
	
case 1:
	  printf ("Input a string");
	  
scanf ("%[^\n]", str1);

	  
	    /*call the function to display address */ 
	    break;
	
case 2:
	  con();
break;
	  
	    /* case 3:  ...........
	       ...........
	       
	       
	       break;
	       case 4:  ...........
	       ...........
	       
	       
	       break;
	       case 5:  ...........
	       ...........
	       
	       
	       break;
	       case 6:  ...........
	       ...........
	       
	       
	       break;
	       case 7:  ...........
	       ...........
	       
	       
	       break;
	       case 8:  ...........
	       ...........
	       
	       
	       break;
	       case 9:  ...........
	       ...........
	       
	       
	       break; */ 
	default:
	  option = 0;
	
 
 
}
    
}
  while (option != 0);
  
return 0;

}
