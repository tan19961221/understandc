#include <stdio.h>

int main(void)
{
    int n1,n2;
    printf("请输入两个整数。");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    printf("%d减去%d的结果是%d\n",n1,n2,n1 - n2);

    return 0;
}
