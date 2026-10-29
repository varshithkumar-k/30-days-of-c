/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int values[] = {9, -3, 14, 2, 8};
    int low = values[0], high = values[0];
    for (size_t i = 1; i < sizeof values / sizeof values[0]; ++i) {
        if (values[i] < low) low = values[i];
        if (values[i] > high) high = values[i];
    }
    printf("Min: %d, Max: %d\n", low, high);
    return 0;
}
