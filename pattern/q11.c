/* WAP to 

1 2 3 4 *
1 2 3 * 5
1 2 * 4 5
1 * 3 4 5
* 2 3 4 5

*/
#include <stdio.h>
int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j) {
                printf("* ");
            } else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}

