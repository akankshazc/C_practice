// Chapter 2.5

#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s); // find string length (number of characters before '\0')

    char *t = s + len - 1; // point to the LAST character in the string (before '\0')

    while (t >= s) // loop backwards until reaching the start of the string
    {
        printf("%c", *t); // print the character pointed to by t

        t = t - 1; // move pointer one character left
    }
    puts(""); // print newline at the end
}

int main()
{
    char string[20];
    printf("Reverse: ");
    scanf("%19[^\n]", string);
    print_reverse(string);
    return 0;
}