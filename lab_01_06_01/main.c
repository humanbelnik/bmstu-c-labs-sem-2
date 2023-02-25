#include <stdio.h>
#include <math.h>
#include <float.h>

#define EPS DBL_EPSILON

#define OK_END 0
#define INPUT_ERROR_END 1
#define ONE_LINE_ERROR_END 2
#define NOT_A_TRIANGLE_ERROR_END 3


void get_area(double ab_x, double ab_y, double ac_x, double ac_y)
{
    double area;

    area = fabs(ab_x * ac_y - ab_y * ac_x) / 2;
    printf("Triangle's area: %.6lf", area);
}


int main(void)
{
    double x_a, y_a, x_b, y_b, x_c, y_c;
    printf("Enter coordinates for A, B, C: ");

    // Input validation
    int input = scanf("%lf%lf%lf%lf%lf%lf", &x_a, &y_a, &x_b, &y_b, &x_c, &y_c);

    if (input != 6)
    {
        return INPUT_ERROR_END;
    }
    // Check if all dots are in one line
    else if (fabs((((x_a - x_b) / (y_a - y_b)) - ((x_a - x_c) / (y_a - y_c)))) <= EPS)
    {
        return ONE_LINE_ERROR_END;
    }
    // Check if it's on a horizontal line
    // or
    // three dots are the same actually
    else if (fabs(y_a - y_b) <= EPS && fabs(y_a - y_c) <= EPS && fabs(y_b - y_c) <= EPS)
    {
        return NOT_A_TRIANGLE_ERROR_END;
    }

    // Calculating vectors
    double ab_x = x_b - x_a;
    double ab_y = y_b - y_a;
    double ac_x = x_c - x_a;
    double ac_y = y_c - y_a;

    get_area(ab_x, ab_y, ac_x, ac_y);

    return OK_END;
}
