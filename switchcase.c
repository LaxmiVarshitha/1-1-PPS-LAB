#include<stdio.h>
int main()
{
int choice;
float first_num,a;
float sec_num,b;
printf("1 for addition\n");
printf("2 for sub\n");
printf("3 for mul\n");
printf("4 for div\n");
printf("5 for mod\n");
printf("enter the choice");
scanf("%d", &choice);
printf("enter the first_num");
scanf("%f", &first_num);
a=first_num;
printf("enter the sec_num");
scanf("%f", &sec_num);
b=sec_num;
switch(choice)
{
case 1: printf("%f", a+b);
	break;
case 2: printf("%f", a-b);
	break;
case 3: printf("%f", a*b);
	break;
case 4: printf("%f", a/b);
	break;
case 5:printf("%d",(int)a%(int)b);
	break;
default:("enter the choice between 1to5");
	break;
}
return 0;
}


