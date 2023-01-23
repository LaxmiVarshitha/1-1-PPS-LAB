#include<stdio.h>
int main()
{
int num,flag=0,i;
for(i=2;i<num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
if(flag==1)
{
printf("not a prime");
}
else
{
printf("prime");
}
}
return 0;
}

