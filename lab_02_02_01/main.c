#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <math.h>

// Return codes
#define OK_END 0
#define INPUT_ERR 1
#define INDEX_OUT_OF_RANGE_ERR 2
#define NO_PRIMES_ERR 3

#define ARR_SIZE_MAX 10


int make_data(int [], size_t);
int primes_siever(int [], const int [], size_t);
void show_primes(int []);


int main(void)
{
    size_t size;
    int nums[ARR_SIZE_MAX];
    int nums_primes[ARR_SIZE_MAX] = { 0 };


    printf("Input size of array: ");
    int input = scanf("%zu", &size);
    // Check input validation
    if (input != 1)
    {
        printf("[ERR] : Input error\n");
        return INPUT_ERR;
    }
    else if (size > ARR_SIZE_MAX || size <= 0)
    {
        printf("[ERR] : Inder out of range\n");
        return INDEX_OUT_OF_RANGE_ERR;
    }

    // Hook errors while filling array with data
    int make_return_code = make_data(nums, size);
    if (make_return_code == INPUT_ERR)
    {
        printf("[ERR] : Input error\n");
        return INPUT_ERR;
    }

    // Hook errors while forming 'primes-only' array from nums[]
    int prime_sieve_return_code = primes_siever(nums_primes, nums, size);
    if (prime_sieve_return_code == NO_PRIMES_ERR)
    {
        printf("[ERR] : No prime numbers in your data\n");
        return NO_PRIMES_ERR;
    }

    // Showing output
    show_primes(nums_primes);

    return OK_END;
}


int make_data(int *nums, size_t SIZE)
{
    printf("Insert elements: ");

    for (size_t i = 0; i < SIZE; i++)
    {
        int input = scanf("%d", &nums[i]);

        if (input != 1)
        {
            return INPUT_ERR;
        }
    }
    return OK_END;
}


int primes_siever(int *nums_primes, const int *nums, size_t SIZE)
{
    size_t primes_counter = 0;
    for (size_t i = 0; i < SIZE; i++)
    {
        bool is_prime = true;

        if (nums[i] <= 1)
        {
            continue;
        }

        // for each element
        int max_divider = (int) sqrt(nums[i]);
        for (int divider = 2; divider <= max_divider; divider++)
        {
            if (nums[i] % divider == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            nums_primes[primes_counter++] = nums[i];
        }
    }

    if (primes_counter == 0)
    {
        return NO_PRIMES_ERR;
    }

    return OK_END;
}

void show_primes(int *nums_primes)
{
    printf("Primes from your array: ");
    for (size_t i = 0; i < ARR_SIZE_MAX; i++)
    {
        if (nums_primes[i] == 0)
        {
            printf("\n");
            break;
        }
        printf("%d ", nums_primes[i]);
    }
}
