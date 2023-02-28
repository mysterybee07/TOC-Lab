 //Program for concatenation of two strings.
 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 int main()
 {
    char s1[100] ="No one is perfect.";
    char s2[100] =" Hi! Iam No one.";
    //int n;
    //n=strlen(s1);
    strcat(s1,s2);
    printf("%s",s1);
    getch();
    return(0);
    }