/*funds1.c -- Passing structure's members as parameters*/
#include <stdio.h>
#define FUNDLEN 50

struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(double, double);

int main()
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94};

    printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));
    return 0;
}

double sum(double x, double y) // Add two double-type numbers
{
    return (x + y);
}