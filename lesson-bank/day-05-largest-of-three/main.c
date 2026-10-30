/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int a = 14, b = 29, c = 23, largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    printf("Largest: %d\n", largest);
    return 0;
}
