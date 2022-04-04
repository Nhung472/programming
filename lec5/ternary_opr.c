#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age=10;
    float ticket_price = 100;
    float discount = age<5? 0.5:0.15;

    ticket_price = ticket_price * (1-discount);
    printf("Ticket price is %f\n", ticket_price);
    return 0;
}