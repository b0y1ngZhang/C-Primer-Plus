//input.c -- 何时使用&
//如果用scanf()读取基本变量类型的值，在变量名前加上一个&
//如果用scanf()把字符串读入字符数组中，不要使用&
#include <stdio.h>
int main(void)
{
    int age;      //变量
    float assets; //变量
    char pet[30]; //字符数组，用于存储字符串
    printf("Enter your age,assets,and favorite pet.\n");
    scanf("%d %f", &age, &assets); //这里要使用&
    scanf("%s", pet);              //字符数组不使用&

    printf("%d $%.0f %s\n", age, assets, pet);
    return 0;
}