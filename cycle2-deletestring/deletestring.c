#include<stdio.h>
#include<string.h>
void del_str(char[],int,int);
int main()
{
int n,p;
char str[30];
printf("enter the string:");
scanf("%s",str);
printf("enter the position from where characters to be deleted:");
scanf("%d",&p);
printf("enter no of characters to be deleted:");
scanf("%d",&n);
del_str(str,p,n);
return 0;
}


void del_str(char str[],int p,int n)
{
int i,j;
for(i=0,j=0;str[i]!='\0';i++,j++)
{
if(i==(p-1))
{
i=i+n;
}
str[j]=str[i];
}
str[j]='\0';
printf(" ");
printf("the string after deletion of characters:%s",str);
return;
}
