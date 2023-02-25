#include <stdio.h>

#define OK_END 0
#define INPUT_ERROR_END 1
#define NOT_POSITIVE_INPUT_ERROR_END 2


void quot_and_rem(int a, int d)
{
    int quotient = 0;
    int summa = 0;
    int reminder;

    // Calculations
    while (summa <= a)
    {
        summa += d;
        quotient++;
    }
    quotient--;
    reminder = a - quotient * d;

    // Output
    printf("Quotient: %d , Reminder: %d", quotient, reminder);
}


int main(void)
{
    int a, d;
    printf("Enter A and D: ");

    // Input validation
    int input = scanf("%d%d", &a, &d);
    if (input != 2)
    {
        return INPUT_ERROR_END;
    }
    else if (a <= 0 || d <= 0)
    {
        return NOT_POSITIVE_INPUT_ERROR_END;
    }

    quot_and_rem(a, d);

    return OK_END;
}
