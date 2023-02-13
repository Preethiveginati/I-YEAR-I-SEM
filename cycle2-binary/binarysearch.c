#include<stdio.h>
int binary_search(int[],int,int);
int main()
{
int size,a[20];int pos=-1,key,i;
printf("enter size of array:");
scanf("%d",&size);
printf("enter %d elements of array:",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("enter the value of key:");
scanf("%d",&key);
pos=binary_search(a,size,key);
if(pos==-1)
printf("search unsuccesful");
else 
printf("element is found at index %d",pos+1);
return 0;
}
int binary_search(int a[],int size,int key)
{
int low=0,high=size-1;
int mid;
while(high>=low)
{
mid=(low+high)/2;
if(key==a[mid])
return mid;
else if(key>a[mid])
low=mid+1;
else
high=mid-1;
}
return -1;
}
