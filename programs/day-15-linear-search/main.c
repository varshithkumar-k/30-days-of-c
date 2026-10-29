/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int values[] = {12, 25, 38, 41};
    size_t count = sizeof values / sizeof values[0], found = count;
    for (size_t i = 0; i < count; ++i) if (values[i] == 38) { found = i; break; }
    if (found < count) printf("Found at index %zu\n", found);
    else puts("Not found");
    return 0;
}
