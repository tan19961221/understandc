#include <stdio.h>
int main(void)
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d是%d的百分之%f",a,b,(double)a / b * 100);
    return 0;
}