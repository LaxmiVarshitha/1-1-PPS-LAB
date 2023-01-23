#include<stdio.h>
#include<math.h>
int main()
{
int i,j;
int count=0;
int n;
printf("enter num");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=2;j<=n;j++)
{
if(i%j==0)
break;
}
if(i==j)
printf("%5d",i);
}
}

