/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    unsigned a = 0, b = 1;
    for (int i = 0; i < 10; ++i) {
        printf("%u%s", a, i == 9 ? "\n" : " ");
        unsigned next = a + b; a = b; b = next;
    }
    return 0;
}
