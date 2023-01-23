#include<math.h>
#include<stdio.h>
int main()
{
int u=0,s=3,i;
float a=9.8;
double t;
for(i=1;i<=10;i++,s=s+3)
{
t=u+sqrt(u*u+2*a*s);
printf("%lf\n%d\n",t,s);
}
return 0;
}
