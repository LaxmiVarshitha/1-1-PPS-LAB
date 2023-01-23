#include<stdio.h>
int main()
{ 
int a, b,c;
printf("enter a,b");
scanf("%d%d", &a,&b);
c=a+b;
printf("a+b=%d\n", c);
c=a-b;
printf("a-b=%d\n", c);
c=a*b;
printf("a*b=%d\n",c);
c=a/b;
printf("a/b=%d\n",c);
c=a%b;
printf("a%b %d\n",c);
printf("++a %d\n",++a);
printf("--a %d\n",--a);
printf("%d==%d is %d\n", a,b, a==b);
printf("%d>=%d is %d\n", a,b, a>=b);
printf("%d<=%d is %d\n", a,b,a<=b);
printf("%d!=%d is %d\n", a,b, a!=b);
return 0;
}
