#include<stdio.h>
int main(){
int n,*ptr,i;
printf("enter the size n:");
scanf("%d",&n);
int a[n];

printf("enter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ptr=a;
printf("enter the elements");
for(i=0;i<n;i++)
{
printf("%5d",*(ptr+i));
}
return 0;
}
