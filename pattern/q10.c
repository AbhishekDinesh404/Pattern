/* WAP to print
        # 
      A B 
    # # # 
  A B C D 
# # # # # 
*/

#include<stdio.h>
int main()
{
    int n,i,s,j;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        char ch='A';

        // spaces
        for(s=0; s<n-i-1; s++)
            printf("  ");

        // print pattern
        for(j=0; j<=i; j++)
        {
            if(i%2==0)
                printf("# ");
            else
            {
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}

