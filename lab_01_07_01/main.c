#include <stdio.h>
#include <math.h>

#define OK_END 0
#define INPUT_ERROR_END 1
#define EPSILON_ERROR_END 2


double get_series_sum(double x, double eps)
{
    double token = x;
    double summa = token;
    int counter = 1;
    int sign = 1;

    do
    {
        counter += 2;
        token *= pow(x, 2) / (counter * (counter - 1));
        sign *= -1;
        summa += sign * token;
    }
    while (token > eps);

    return summa;
}


int main(void)
{
    double x;
    double eps;
    printf("Input X and Epsilon: ");

    // Input validation
    int input = scanf("%lf%lf", &x, &eps);
    if (input != 2)
    {
        return INPUT_ERROR_END;
    }
    else if (eps > 1 || eps <= 0)
    {
        return EPSILON_ERROR_END;
    }

    // Calculations
    double summa = get_series_sum(x, eps);
    double func_true = sin(x);
    double absolute_error = fabs(func_true - summa);
    double relative_error = absolute_error / fabs(func_true);

    // Output
    printf("Series summa: %lf\n", summa);
    printf("True value: %lf\n", func_true);
    printf("Absolute error: %lf\n", absolute_error);
    printf("Relative error: %lf\n", relative_error);
    
    return OK_END;
}
