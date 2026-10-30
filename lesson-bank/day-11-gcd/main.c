/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    unsigned a = 84, b = 30;
    while (b != 0) { unsigned remainder = a % b; a = b; b = remainder; }
    printf("GCD: %u\n", a);
    return 0;
}
