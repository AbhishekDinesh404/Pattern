#include<stdio.h>
void main()
{
int num,r,mul=1;
printf("enter the number:");
scanf("%d",&num);
for( ;num;num=num/10)
{
r=num%10;
if(r%2==0)
{
mul=mul*r;
}
}
printf("%d",mul);
}
