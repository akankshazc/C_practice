// HF Chapter 2

#include <stdio.h>

int main()
{
    // gives out errors
    // variable that points to a string literal can't
    // be used to change the contents of the string
    // char *cards = "JQK";

    // this will work
    char cards[] = "JQK";

    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    return 0;
}