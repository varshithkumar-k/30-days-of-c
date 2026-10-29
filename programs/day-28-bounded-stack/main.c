/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int stack[3]; size_t used = 0;
    for (int value = 10; value <= 30; value += 10) {
        if (used == sizeof stack / sizeof stack[0]) return 1;
        stack[used++] = value;
    }
    while (used > 0) printf("Popped: %d\n", stack[--used]);
    return 0;
}
