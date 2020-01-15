#include <stdio.h>
int main(void) {
    int n1, n2, sum, x, min, max;
    sum = 0;
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        x = n1 - n2;
        max = n1;
        min = n2;
    } else {
        x = n2 - n1;
        max = n2;
        min = n1;
    }

    do {
        x = x - 1;
        sum += min + x;
    } while (x != 1);

    printf("%d 和%d 之间所有整数的和是%d", min, max, sum);
    return 0;
}