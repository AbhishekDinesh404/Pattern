#include<stdio.h>
void main()
{
int num, even=0,odd=0;
printf("Enter");
scanf("%d",&num);
for( ; num ;num=num/10)
{
int digit=num%10;

if(digit%2==0)
even=even+digit;
else
odd=odd+digit;
}
printf("sum of even digit is %d \n",even);
printf("sum of odd digit is %d \n",odd);
}
