//Program to search the string(Save this program in DEV C++  with extension .c i.e TOC1.c )
#include<string.h>
#include<stdio.h>
main()
{
char a[100],b[100];
int i,j;
printf("Enter the string:\n");
scanf("%s",&a);
printf("Enter the substring to be searched:\n");
scanf("%s",&b);
i = strstr(a,b);
// if string b is in string a then it returns true value i.e i=1 
//gelse if string b isnot in a then it returns the false value i.e i=0.
if(i==0)
{ 
    printf("Substring Not found\n");
    }
    else
    { 
        printf("Substring found\n");
        }
 }