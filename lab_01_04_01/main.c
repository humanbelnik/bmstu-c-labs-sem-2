#include <stdio.h>

#define OK_END 0

int main(void)
{
    const int floors = 9;
    const int flats_on_floor = 4;
    const int flats_in_section = flats_on_floor * floors;
    int flat_number;

    // Input
    printf("Input the number of your flat: ");
    scanf("%d", &flat_number);

    // Calculations
    int section = (flat_number - 1) / flats_in_section + 1;
    int floor = ((flat_number - 1) % flats_in_section) / flats_on_floor + 1;

    // Output
    printf("Section and floor for your flat number: %d , %d", section, floor);

    return OK_END;
}
