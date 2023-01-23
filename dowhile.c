#include<stdio.h>
int main()
{
int num=1;
do
{
if(num%3==0 && num%5==0)
{
printf("%5d", num);
}
num=num+1;
}
while(num<=100);
return 0;
}

