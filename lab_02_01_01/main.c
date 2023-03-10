#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

// Return codes
#define OK_END 0
#define INPUT_ERR 1
#define INDEX_OUT_OF_RANGE_ERR 2
#define NO_ODDS_ERR 3

// Consts
#define ARR_SIZE_MAX 10

int make_data(int [], size_t);
int odds_multiplication(const int [], size_t);

int main(void)
{
    size_t size;
    int nums[ARR_SIZE_MAX];


    printf("Input size of array: ");
    int input = scanf("%zu", &size);

    // Check input validation
    if (input != 1)
    {
        printf("[ERR] : Incorrect input\n");
        return INPUT_ERR;
    }
    else if (size > ARR_SIZE_MAX || size <= 0)
    {
        printf("[ERR] : Index out of range\n");
        return INDEX_OUT_OF_RANGE_ERR;
    }

    // Hook errors while filling array with data
    int make_return_code = make_data(nums, size);
    if (make_return_code == INPUT_ERR)
    {
        printf("[ERR] : Incorrect input\n");
        return INPUT_ERR;
    }

    // Hook errors while finding multiplication of all odds
    int odds_mult_return_code = odds_multiplication(nums, size);
    if (odds_mult_return_code == NO_ODDS_ERR)
    {
        printf("[ERR] : No odd numbers in your data\n");
        return NO_ODDS_ERR;
    }

    return OK_END;
}


int make_data(int *nums, size_t size)
{
    printf("Insert elements: ");

    for (size_t i = 0; i < size; i++)
    {
        int input = scanf("%d", &nums[i]);

        if (input != 1)
        {
            return INPUT_ERR;
        }
    }
    return OK_END;
}


int odds_multiplication(const int *nums, size_t size)
{
    int result = 1;
    bool odd_exist = false;

    for (size_t i = 0; i < size; i++)
    {
        if ((nums[i] % 2 != 0) && (nums[i] != 0))
        {
            result *= nums[i];
            odd_exist = true;
        }
    }
    if (odd_exist)
    {
        printf("Multiplication of all odds in your array: %d\n", result);
    }
    else
    {
        return NO_ODDS_ERR;
    }

    return OK_END;
}
