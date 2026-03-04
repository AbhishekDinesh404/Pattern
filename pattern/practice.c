#include<stdio.h>
void main()
{
int n,j,i,num;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
num=2;
for(j=0;j<i+1;j++)
{
printf("%d ",num);
num=num+2;
}
printf("\n");
}
}
