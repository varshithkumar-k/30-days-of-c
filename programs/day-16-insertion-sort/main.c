/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int values[] = {8, 3, 7, 1, 4};
    size_t n = sizeof values / sizeof values[0];
    for (size_t i = 1; i < n; ++i) {
        int value = values[i]; size_t j = i;
        while (j > 0 && values[j - 1] > value) { values[j] = values[j - 1]; --j; }
        values[j] = value;
    }
    for (size_t i = 0; i < n; ++i) printf("%d%s", values[i], i + 1 == n ? "\n" : " ");
    return 0;
}
