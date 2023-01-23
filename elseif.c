#include<stdio.h>
int main()
{
int percent;
printf("enter the percent:");
scanf("%d", &percent);
if(percent>=70)
{
printf("A+");
}
else if(percent>=60 && percent<=69)
{
printf("A");
}
else if(percent>=40 && percent<=59)
{
printf("B");
}
else
{

printf("F");
}
return 0;
}

 
