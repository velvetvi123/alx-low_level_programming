#include <stdio.h>

int main(void)
{
    char digit = '0';

    while (digit <= '9')
    {
        putchar(digit);
        digit++;
    }

    putchar('\n'); // Print a new line

    return 0;
}
