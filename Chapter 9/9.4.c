/*misuse.c -- 错误地使用函数*/
#include <stdio.h>
int imax();
int main(void)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    /*函数调用imax(3)把一个整数放在栈中。当imax()函数开始执行时，它从栈中读取两个整数。
    而实际上栈中只存放了一个待读取的整数，所以读取的第2个值是当时恰好在栈中的其他值。*/
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    /*传递float类型的值。当float类型被作为参数传递时会被升级为double类型。
    两个double类型的值就是两个64位的值，所以128位的数据被放在栈中。
    当imax()从栈中读取两个int类型（32位）的值时，它从栈中读取前64位。*/
    return 0;
}
int imax(n, m) int n, m;
{
    return (n > m ? n : m);
}