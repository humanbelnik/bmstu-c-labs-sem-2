#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

// Return codes
#define OK_END 0
#define INPUT_ERR 1
#define NO_DATA_ERR 2
#define APPROP_OVERFLOW_END 100

#define ARR_SIZE_MAX 10


bool make_data(int [], size_t*, bool*);
void insertion_sort(int [], size_t);
void show_data(const int [], size_t);


int main(void)
{
    int nums[ARR_SIZE_MAX];
    size_t size = 0;
    bool is_empty = true;

    bool is_overflow = make_data(nums, &size, &is_empty);

    if (is_empty)
    {
        printf("[ERR] : No data\n");
        return NO_DATA_ERR;
    }
    insertion_sort(nums, size);
    show_data(nums, size);

    return (is_overflow) ? APPROP_OVERFLOW_END : OK_END;
}


bool make_data(int *nums, size_t *size, bool *is_empty)
{
    bool flag_overflow = false;
    printf("Input elements: ");

    int element;
    while (scanf("%d", &element) == 1)
    {
        *is_empty = false;

        if (*size == 10)
        {
            flag_overflow = true;
            break;
        }
        else
        {
            *size += 1;
            nums[*size - 1] = element;
        }

    }

    return (flag_overflow) ? true : false;
}

void insertion_sort(int *nums, size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        size_t j = i;
        while ((j > 0) && (nums[j - 1] > nums[j]))
        {
            int tmp;
            tmp = nums[j - 1];
            nums[j - 1] = nums[j];
            nums[j] = tmp;
            j--;
        }
    }
}


void show_data(const int *nums, size_t size)
{
    printf("Array sorted with insertion sort: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
