/*
WAP

* * * * * *
1 3 5 7 9
* * * *
1 3 5
* *
1

*/

#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{int num=1;
for(j=0;j<n-i;j++)
{
if(i%2==0)
printf("* ");
else{
printf("%d ",num);
num+=2;
}
}
printf("\n");
}

}
