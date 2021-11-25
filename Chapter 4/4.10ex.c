#include <stdio.h>
int main(void)
{
    char name[40];
    float cash;
    printf("Pleast input your name:");
    scanf("%s", name);
    printf("Please input how much your family is richer:");
    scanf("%f", &cash);
    printf("The %s family just may be $%.2f dollars richer!\n", name, cash);
    return 0;
}