#include<stdio.h>

int main(void)
{   
    int a, b;
    printf("请输入的身高：");
    scanf("%d",&a);    
    printf("您的标准体重是%2.1f公斤。\n",(a-100)*0.9);
    return 0;
}