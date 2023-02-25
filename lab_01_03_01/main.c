#include <stdio.h>

#define OK_END 0

int main(void)
{
    double v_1, v_2;
    double t_1, t_2;

    // Input
    printf("Input parameters for the 1st and the 2nd liquids: ");
    scanf("%lf%lf%lf%lf", &v_1, &t_1, &v_2, &t_2);

    // Calculations
    double v = v_1 + v_2;
    double t = (v_1 * t_1 + v_2 * t_2) / v;

    // Output
    printf("Final V: %.6lf\n", v);
    printf("Final T: %.6lf", t);

    return OK_END;
}

