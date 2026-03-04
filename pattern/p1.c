#include<stdio.h>
void main()
{
int num=512;
for(int i=2; i<=num;i++)
{
if(num%i==0 && i%2==0)
printf("%d \n",i);
}

}
