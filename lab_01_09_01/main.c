#include <stdio.h>
#include <math.h>

#define OK_END 0
#define INPUT_ERROR_END 1
#define EMPTY_SEQUENCE_ERROR_END 2


int calculate_sin(double *result)
{
    double x;
    int token_input = scanf("%lf", &x);

    if (token_input != 1)
    {
        return INPUT_ERROR_END;
    }
    else if (x < 0)
    {
        return EMPTY_SEQUENCE_ERROR_END;
    }

    double summa = 0;
    int counter = 0;

    do
    {
        counter++;
        summa += sqrt(x / (double) counter);

        if (scanf("%lf", &x) != 1)
        {
            return INPUT_ERROR_END;
        }

    }
    while (x >= 0);
    *result = sin(summa);
    return OK_END;
}


int main(void)
{
    double result;
    printf("Enter sequence of X-es with zero as ending: ");

    // Validating output
    int input = calculate_sin(&result);

    if (input == INPUT_ERROR_END)
    {
        return INPUT_ERROR_END;
    }
    else if (input == EMPTY_SEQUENCE_ERROR_END)
    {
        return EMPTY_SEQUENCE_ERROR_END;
    }

    printf("Sin value: %lf", result);
    return OK_END;
}
