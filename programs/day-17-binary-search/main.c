/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int values[] = {2, 6, 10, 14, 18};
    size_t left = 0, right = sizeof values / sizeof values[0];
    while (left < right) {
        size_t middle = left + (right - left) / 2;
        if (values[middle] < 14) left = middle + 1; else right = middle;
    }
    if (left < sizeof values / sizeof values[0] && values[left] == 14)
        printf("Found at index %zu\n", left);
    else puts("Not found");
    return 0;
}
