#include<stdio.h>
void main()
{
int num;
printf("enter the num");
scanf("%d", &num);
if (num<=30)
{
printf("group 1");
}
	if (num%2==0)
	{
	printf("group red");
	}
else 
{
printf("group blue");
}
return;
}

