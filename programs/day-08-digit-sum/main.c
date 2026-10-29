/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    unsigned number = 5832, sum = 0;
    do { sum += number % 10; number /= 10; } while (number != 0);
    printf("Digit sum: %u\n", sum);
    return 0;
}
