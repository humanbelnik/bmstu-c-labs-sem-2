#include <stdio.h>
#include <math.h>

// Return codes
#define OK_END 0
#define INPUT_ERR 1
#define INDEX_OUT_OF_RANGE_ERR 2
#define PAIRS_DOES_NOT_EXIST_ERR 3

#define ARR_SIZE_MAX 10


int make_data(int *, const int *);
int count_pairs(int *, const int *);
void calculation(int *, int *, const int);


int main(void)
{
    int nums[ARR_SIZE_MAX];
    int SIZE;

    printf("Input size of your array: ");
    int input = scanf("%d", &SIZE);
    if (input != 1)
    {
        printf("[ERR] : Input error\n");
        return INPUT_ERR;
    }
    if (SIZE <= 0 || SIZE > ARR_SIZE_MAX)
    {
        printf("[ERR] : Index out of range\n");
        return INDEX_OUT_OF_RANGE_ERR;
    }

    // Hook errors while filling data
    int make_data_return_code = make_data(nums, nums + SIZE);
    if (make_data_return_code == INPUT_ERR)
    {
        printf("[ERR] : Input error\n");
        return INPUT_ERR;
    }

    // If all nums in array are NEG || POS -> Return ERR
    int pairs_amount = count_pairs(nums, nums + SIZE);
    if (pairs_amount == 0)
    {
        printf("[ERR] : No pos-neg pairs in your data\n");
        return PAIRS_DOES_NOT_EXIST_ERR;
    }

    // Calculate sum
    calculation(nums, nums + SIZE, pairs_amount);

    return OK_END;
}


int make_data(int *left, const int *right)
{
    int cnt = 0;

    printf("Input elements: ");
    while (left < right)
    {
        int input = scanf("%d", left);
        if (input != 1)
        {
            return INPUT_ERR;
        }
        left++;
        cnt++;
    }
    left -= cnt;
    return OK_END;
}


int count_pairs(int *left, const int *right)
{
    int cnt = 0;
    int pos_count = 0, neg_count = 0;
    while (left < right)
    {
        if (*left < 0)
        {
            neg_count++;
        }
        else if (*left > 0)
        {
            pos_count++;
        }
        left++;
    }
    left -= cnt;

    int min = (int) fmin((double) pos_count, (double) neg_count);
    return min;
}


void calculation(int *left, int *right, const int pairs_amount)
{
    int result = 0;
    int pair_result;

    right--;
    for (int i = 0; i < pairs_amount; i++)
    {
        while (*left >= 0)
        {
            left++;
        }
        while (*right <= 0)
        {
            right--;
        }

        pair_result = *left * *right;
        result += pair_result;
        if (i < pairs_amount - 1)
        {
            left++;
            right--;
        }
    }
    printf("Calculation result: %d\n", result);
}
