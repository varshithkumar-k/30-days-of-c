/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    unsigned n = 97;
    int prime = n >= 2;
    for (unsigned d = 2; prime && d <= n / d; ++d)
        if (n % d == 0) prime = 0;
    printf("%u: %s\n", n, prime ? "prime" : "not prime");
    return 0;
}
