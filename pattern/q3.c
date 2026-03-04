/*
WAP
13579
 3579
  579
   79
    9
*/

#include<stdio.h>
void main()
{
int n,i,j,s;
for(i=0;i<5;i++)
{
for(s=0;s<i;s++)
printf("  ");
for(j=2*i+1;j<=10;j+=2)
printf("%d ",j);
printf("\n");
}

}
