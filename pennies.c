#include <cs50.h>
#include <stdio.h>

int main(void)
{
        int days = 0;

        do
        {
                printf("What number of days are in the month? ");
                days = get_int();
        }
        while (!(days >= 28 && days <= 31));
        /*printf("%d days\n", days);

        long long pennies = 0;

        do
        {
            printf("What number of pennies are there on day one? ");
            pennies = get_long_long();

        }
        while (pennies <= o);
        /*printf("%d days\n", days);

        long long total = 0;

        for (int a = 1; a <= days; a++)
        {

            total += pennies;
            pennies *= 2;
        }

        double_dollar = (double)total / 100
        printf("$%.2f.n", dollar);
}
