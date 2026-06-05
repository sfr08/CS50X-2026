#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long num = get_long("Number: ");
    long temp = num;

    int size = 0;
    int odd_sum = 0;
    int even_sum = 0;
    int total_sum = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        if (size % 2 == 1)
        {
            digit *= 2;
            odd_sum += (digit % 10) + (digit / 10);
        }
        else
        {
            even_sum += digit;
        }

        temp /= 10;
        size++;
    }


    total_sum = odd_sum + even_sum;


    if (total_sum % 10 == 0)
    {
        if ((size == 16 && num / 1000000000000000L == 4) || (size == 13 && num / 1000000000000L == 4))
        {
            printf("VISA\n");
        }
        else if (size == 16 && (num / 100000000000000L >= 51 && num / 100000000000000L <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if (size == 15 && (num / 10000000000000L == 34 || num / 10000000000000L == 37))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
