#include<stdio.h>
void add(int[2][2],int[2][2]);
int main()
{
int i,j,a[2][2],b[2][2];
printf("enter elements of a");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
scanf("%5d",&a[i][j]);

}
}
printf("enter elements in b");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
scanf("%5d",&b[i][j]);
}
}
add(a,b);
return 0;
}
void add(int a[2][2],int b[2][2])
{
int i,j,rev[i][j];
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
rev[i][j]=a[i][j]+b[i][j];
printf("%5d",rev[i][j]);
}
printf("\n");
}
return;
}


