 //To find the substring in a stringwith matched index number.
 #include<stdio.h>
 #include<string.h>
 int indexofsubstring(char str[],char s[]);
 int main()
 {
    int index;
index=indexofsubstring("abababbbaabbababbbaa","aabb");
if(index==-1)
printf("substring not found");
else
printf("substring found at index %d",index);
getch();
}
int indexofsubstring(char str[],char s[]){int i,j,k,l;
l=strlen(s);
for(i=0;str[i+l-1];i++)// i+leave-one(11111)//
{
    k=i;
    for(j=0;j<=l-1;j++)
    {
        if(str[k]!=s[j])
        break;k++;
        }
        if(j==l)//leave
        return(i);
        }
        return(-1);
        }