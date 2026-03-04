#include<stdio.h>
void main()
{
int i,j,n;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
char ch='A';
int num=1;
for(j=0;j<=n-i;j++)
if(j%2==0)
{
printf("%c ",ch);
ch=ch+1;
}
else
{
printf("%d ",num);
num=num+1;
}
printf("\n");
}
}
