#include<stdio.h>
void main()
{
int num, mult,prod;
printf("enter num");
scanf("%d", &num);
printf("enter mult");
scanf("%d", &mult);
mult=0;
while(mult<=10)
{

mult=mult+1;
prod=num*mult;
printf("%d*%d=%d\n",num,mult,prod);
}
return;
}
