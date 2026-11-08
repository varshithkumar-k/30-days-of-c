/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    unsigned long long result = 1;
    unsigned n = 8;
    if (n > 20) return 1;
    for (unsigned i = 2; i <= n; ++i) result *= i;
    printf("%u! = %llu\n", n, result);
    return 0;
}
