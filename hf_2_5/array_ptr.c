// HF Chapter 2.5

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 15;

    // Array of pointers to integers
    int *ptrs[] = {&a, &b, &c};

    // Array of pointers to Strings
    char *names[] = {"Bowser", "Mario", "Peach"};

    for (int i = 0; i < 3; i++)
        printf("%d\n", *ptrs[i]); // dereference the pointer

    for (int i = 0; i < 3; i++)
        printf("%s\n", names[i]);
}