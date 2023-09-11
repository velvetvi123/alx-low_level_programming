#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int num = -5;
    int result = ABS(num);
    printf("Absolute value of %d is %d\n", num, result);
    return 0;
}
