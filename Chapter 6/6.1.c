/*summing.c -- 根据用户键入的整数求和*/
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L; //long类型的0，不是int类型的0
    int status;
    printf("Please enter an integer to be summed ");
    printf("q to qiut: ");
    status = scanf("%ld", &num);
    while (status == 1) //scanf()成功读取一个整数，返回值为1；否则返回值为0
    {
        sum += num;
        printf("Please enter next integer (q to qiut): ");
        status = scanf("%ld", &num);
    }
    /*while(scanf("%ld",&num)==1)
    {
        循环行为
    }
    */
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}