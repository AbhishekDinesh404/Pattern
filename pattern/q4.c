/*
WAP

A
A *
A * C
A * C *
A * C * E
*/

#include<stdio.h>
void main()
{
int n,i,j;
for(i=0;i<5;i++)
{
char chara='A';
for(j=0;j<i+1;j++)
{
if(j%2==0)
{
printf("%c ",chara);
chara+=2;
}
else
printf("* ");
}
printf("\n");
}
}
