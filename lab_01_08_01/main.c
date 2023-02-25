// For this problem we assume that 1 byte is equal to 8 bits

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>

#define MAX UCHAR_MAX

#define OK_END 0
#define INPUT_ERROR_END 1


bool flag = true;

int form_byte(int byte)
{
    if (byte > MAX)
    {
        flag = false;
        byte = 256 - byte;
    }
    else if (byte < 0)
    {
        flag = false;
        byte = 256 + byte;
    }

    return byte;
}


void dec_to_binary(int byte, int *bits)
{
    int mask = 1;

    for (int i = 0; i < 8; i++)
    {
        bits[7 - i] = (int) (byte >> i) & mask;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d", bits[i]);
    }
}

void binary_to_dec(int *bits)
{
    int sum = 0;

    for (int i = 7; i >= 0; i--)
    {
        int digit = (int) ((int) bits[7 - i] * pow(2.0, i));
        sum += digit;
    }
    printf(" ");
    printf("%d", sum);
}


int main(void)
{
    int byte_1, byte_2, byte_3, byte_4;

    printf("Insert values of four bytes: ");
    int input = scanf("%d%d%d%d", &byte_1, &byte_2, &byte_3, &byte_4);

    // Input validation
    if (input != 4)
    {
        printf("Error: incorrect input");
        return INPUT_ERROR_END;
    }

    byte_1 = form_byte(byte_1);
    byte_2 = form_byte(byte_2);
    byte_3 = form_byte(byte_3);
    byte_4 = form_byte(byte_4);

    /* Checking overflow of MAX and MIN boundaries
    else if (byte_1 > MAX || byte_2 > MAX || byte_3 > MAX || byte_4 > MAX)
    {
        printf("Error: byte overflow");
        return BYTE_OVERFLOW_ERROR_END;
    }
    else if (byte_1 < 0 || byte_2 < 0 || byte_3 < 0 || byte_4 < 0)
    {
        printf("Error: byte overflow");
        return BYTE_OVERFLOW_ERROR_END;
    }
    */
    // Each 'bits' array will store binary representation of each byte
    int bits_1[7];
    int bits_2[7];
    int bits_3[7];
    int bits_4[7];

    // After the following execution we print packed data and save each byte in binary in corresponding 'bits' array
    if (flag == true)
    {
        printf("Result: ");
    }
    else
    {
        printf("Error: ");
    }

    dec_to_binary(byte_1, bits_1);
    dec_to_binary(byte_2, bits_2);
    dec_to_binary(byte_3, bits_3);
    dec_to_binary(byte_4, bits_4);

    binary_to_dec(bits_1);
    binary_to_dec(bits_2);
    binary_to_dec(bits_3);
    binary_to_dec(bits_4);

    return OK_END;
}
