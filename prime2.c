#include<stdio.h>
int main()
{
int n;
printf("enter any num n");
scanf("%d",&n);
if(n%2==0||n%3==0||n%5==0||n%7==0||n%11==0 && n!=2||n!=3||n!=5||n!=7||n!=11)
printf("num is not prime");
//else if(n=2||3||5||7||11)
//printf("num is prime");

else
printf("num is prime");
return 0;
}


