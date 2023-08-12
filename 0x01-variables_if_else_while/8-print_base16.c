#include <stdio.h>

int main(void)
{
    char digit = '0';

    while (digit <= '9')
    {
        putchar(digit);
        digit++;
    }

    char lowercaseLetter = 'a';

    while (lowercaseLetter <= 'f')
    {
        putchar(lowercaseLetter);
        lowercaseLetter++;
    }

    putchar('\n'); // Print a new line

    return 0;
}
