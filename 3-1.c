#include <stdio.h>

int main(int argc, const char *argv[]) {

    int a, b;
    printf("请输入俩个整数。\n");
    scanf("%d%d", &a, &b);

    if ((a % b) == 0) {
        puts("B是A的约数");
    } else {
        puts("B不是A的约数");
    }

    return 0;

}