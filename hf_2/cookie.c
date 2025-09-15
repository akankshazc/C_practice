// HF Chapter 2

#include <stdio.h>

void fortune_cookie(char msg[]) // here char msg[] is equivalent to char *msg (function call)
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %li bytes\n", sizeof(msg)); // gives warning
}

int main()
{
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    printf("The quote string is stored at: %p\n", quote);

    char second[] = "Pointers are confusing";
    printf("Message reads: %s\n", second);
    printf("second occupies %li bytes\n", sizeof(second));
}