#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float d;
float root1,root2;
printf("enter a,b,c");
d=b*b-4*a*c;
if(d>=0)
{
root1=(-b+(sqrt(d))/(2*a));
root2=(-b-(sqrt(d))/(2*a));
printf("%f%f",root1,root2);
printf("roots are real");
}
else
printf("roots are imaginary");
return 0;
}

