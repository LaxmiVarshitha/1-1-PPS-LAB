#include<stdio.h>
int main()
{
int a[3]={10,20,30};
int max,i,min,sum,avg;
max=a[0],min =a[0],sum=0;
for(i=0;i<3;i++)
{
if(a[i]>max)
max=a[i];
}
printf("enter max=%d\n",max);
for(i=0;i<3;i++)
{
if(a[i]<min)
min=a[i];
}
printf("enter min=%d\n",min);
for(i=0;i<3;i++)
{
sum=sum+a[i];
}
printf("sum=%d\n",sum);
avg=sum/3;
printf("average=%d\n",avg);
return 0;
}
