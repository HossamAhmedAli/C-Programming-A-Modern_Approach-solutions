#include<stdio.h>
void pay_amount( int dollars, int *twenties, int *tens, int *fives, int *ones);

void main(void)
{
    int dollars_input;
    int twenties,tens, fives, ones;
    printf("Enter a dollar amount: ");
    scanf("%d",&dollars_input);
    pay_amount(dollars_input, &twenties, &tens, &fives, &ones);
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",twenties, tens, fives, ones);

}
void pay_amount( int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties=(dollars/20);
    dollars-=( (*twenties) * 20);
    *tens=(dollars/10);
    dollars-=( (*tens) * 10);
    *fives=(dollars/5);
    dollars-=( (*fives) * 5);
    *ones=(dollars / 1);

}
