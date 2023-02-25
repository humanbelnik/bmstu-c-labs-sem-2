#include <stdio.h>
#include <math.h>

#define OK_END 0

int main(void)
{
    double a, b;
    float angle;

    // Input
    printf("Enter a, b and angle: ");
    scanf("%lf%lf%f", &a, &b, &angle);

    // Calculations
    float angle_rad = angle * (M_PI / 180.0);
    double cathetus = fabs(a - b) / 2;
    double height = tan(angle_rad) * cathetus;
    double area = (a + b) * height / 2;

    // Output
    printf("Trapeze's area = %.6lf", area);

    return OK_END;
}
