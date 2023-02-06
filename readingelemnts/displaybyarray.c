#include<stdio.h>
int main()
{
int a[50],i,n,*ptr;
ptr=a;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter %d elements of array:",n);
for(i=0;i<n;i++)
scanf("%d",ptr+i);
for(i=0;i<n;i++)
{
printf("%d\n",*(ptr+i));
}
return 0;
}

