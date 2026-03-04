#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
int num=2;
for(j=0;j<i+1;j++)
{printf("%d ",num);
num+=2;
}
printf("\n");
}
}
