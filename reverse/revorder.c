#include<stdio.h>
int main()
{
int a[50],i,n,*ptr;
ptr=a;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter %d elements of array:",n);
for(i=0;i<n;i++)
{
scanf("%d",ptr);
printf("%d\n",(*ptr));
ptr++;
}
ptr=&a[n-1];
printf("elements of array in reverse order:\n");
for(i=n-1;i>=0;i--)
{
printf("%d\n",(*ptr));
ptr--;
}
return 0;
}




