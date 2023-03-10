#include <stdio.h>
#include <stddef.h>

// Return codes
#define OK_END 0
#define INPUT_ERR 1
#define INDEX_OUT_OF_RANGE_ERR 2

// Consts
#define ARR_SIZE_MAX 10

int make_data(int [], size_t);
size_t count_fibos(const int [], size_t);
void gen_fibos(int [], size_t);
void insert_fibos(const int [], int [], size_t, size_t);
void show_data(const int [], size_t);


int main(void)
{
    size_t size;
    int nums[ARR_SIZE_MAX * 2];
    int fibos[ARR_SIZE_MAX];

    printf("Input the number of elements: ");
    int input = scanf("%zu", &size);
    if (input != 1)
    {
        printf("[ERR] : Input error\n");
        return INPUT_ERR;
    }
    else if (size <= 0 || size > ARR_SIZE_MAX)
    {
        printf("[ERR] : Index out of range\n");
        return INDEX_OUT_OF_RANGE_ERR;
    }

    // Hook errors while filling array with data
    int make_return_code = make_data(nums, size);
    if (make_return_code == INPUT_ERR)
    {
        printf("[ERR] : Input error\n");
        return INPUT_ERR;
    }

    size_t fibos_amount = count_fibos(nums, size);
    if (fibos_amount == 0)
    {
        show_data(nums, size);
        return OK_END;
    }

    gen_fibos(fibos, fibos_amount);

    insert_fibos(fibos, nums, fibos_amount, size);

    show_data(nums, size + fibos_amount);

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


size_t count_fibos(const int *nums, size_t size)
{
    size_t fibos_amount = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (nums[i] % 3 == 0)
        {
            fibos_amount++;
        }
    }
    return fibos_amount;
}


void gen_fibos(int *fibos, size_t fibos_amount)
{
    int fib_0 = 0;
    int fib_1 = 1;
    fibos[0] = 0;

    for (size_t i = 1; i < fibos_amount; i++)
    {
        int fib_next = fib_0 + fib_1;
        fib_1 = fib_0;
        fib_0 = fib_next;
        fibos[i] = fib_next;
    }
}


void insert_fibos(const int *fibos, int *nums, size_t fibos_amount, size_t size)
{
    size_t i = 0;
    size_t wall = 0;

    while (i < fibos_amount)
    {
        if (nums[wall] % 3 == 0)
        {
            for (size_t j = size + i; j > wall; j--)
            {
                nums[j + 1] = nums[j];
            }
            nums[wall + 1] = fibos[i++];
            wall++;
        }
        wall++;
    }
}


void show_data(const int *nums, size_t new_size)
{
    printf("Fibonacci's numbers inserted: ");
    for (size_t i = 0; i < new_size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

