#include<stdio.h>
int power(int,int);
int main()
{
int x,n,res;
printf("enter x:");
scanf("%d",&x);
printf("enter n:");
scanf("%d",&n);
res=power(x,n);
printf("final value: %d*%d=%d",x,n,res);
return 0;
}
int power(int x,int n)
{
if(n==0)
return 1;
else if (n==1)
return x;
else if (n%2==0)
return power(x*x,n/2);
else
return x*power(x*x,(n-1)/2);
}


