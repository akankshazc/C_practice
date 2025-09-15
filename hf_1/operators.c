// HF Chapter 1

// Difference between Logical and Bitwise operators

#include <stdio.h>

int main()
{
    // Logical operators: && and ||
    int x = 5;
    int y = 0;

    printf("%d\n", x && y); // 0
    printf("%d\n", x || y); // 1

    // Bitwise operators: & and |
    int a = 6; // 0110 in binary
    int b = 3; // 0011 in binary

    printf("%d\n", a & b); // 2 (0010 in binary)
    printf("%d\n", a | b); // 7 (0111 in binary)
}