#include <stdio.h>
#include <math.h>
#include <float.h>

#define EPS DBL_EPSILON

#define OK_END 0
#define INPUT_ERROR_END 1
#define ONE_LINE_ERROR_END 2
#define NOT_A_TRIANGLE_ERROR_END 3


void get_area(double ABx, double ABy, double ACx, double ACy)
{
    double area;

    area = fabs(ABx * ACy - ABy * ACx) / 2;
    printf("Triangle's area: %.6lf", area);
}


int main(void)
{
    double Xa, Ya, Xb, Yb, Xc, Yc;
    printf("Enter coordinates for A, B, C: ");

    // Input validation
    int input = scanf("%lf%lf%lf%lf%lf%lf", &Xa, &Ya, &Xb, &Yb, &Xc, &Yc);

    if (input != 6)
    {
        return INPUT_ERROR_END;
    }
    // Check if all dots are in one line
    else if ( fabs( (((Xa - Xb) / (Ya - Yb)) - ((Xa - Xc) / (Ya - Yc))) ) <= EPS )
    {
        return ONE_LINE_ERROR_END;
    }
    // Check if it's on a horizontal line
    // or
    // three dots are the same actually
    else if (fabs(Ya - Yb) <= EPS && fabs(Ya - Yc) <= EPS && fabs(Yb - Yc) <= EPS)
    {
        return NOT_A_TRIANGLE_ERROR_END;
    }

    // Calculating vectors
    double ABx = Xb - Xa;
    double ABy = Yb - Ya;
    double ACx = Xc - Xa;
    double ACy = Yc - Ya;

    get_area(ABx, ABy, ACx, ACy);

    return OK_END;
}
