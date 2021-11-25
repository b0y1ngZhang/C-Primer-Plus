//scores_in.c -- 使用循环处理数组
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;
    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d", &score[index]); //读取10个分数
    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE; index++) //程序能重复显示刚读入的数据是很好的变成习惯
        printf("%5d", score[index]);
    printf("\n");
    for (index = 0; index < SIZE; index++)
        sum += score[index];
    average = (float)sum / SIZE;
    printf("Sum of scores=%d,average=%.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);
    return 0;
}
/*模块化隐含的思想是：应该把程序划分为一些独立的单元，每个单元执行一个任务。这样做提高了程序的可读性。
模块化使程序的不同部分彼此独立，方便后续更新或修改程序。*/