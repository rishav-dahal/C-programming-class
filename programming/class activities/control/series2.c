
// 1/1 + 1/2 + ... 1/n
#include <stdio.h>

 

int main()
    {
    double n = 4, sum = 0, i;
    for (i=1; i<=n; i++){
        sum += 1/(n-1) + 1/n;
    }
    printf("The sum is %.4lf.\n", sum);
    return 0;
}
 

