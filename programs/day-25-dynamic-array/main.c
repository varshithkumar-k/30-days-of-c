/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n = 5;
    int *squares = malloc(n * sizeof *squares);
    if (squares == NULL) { fputs("Allocation failed\n", stderr); return 1; }
    for (size_t i = 0; i < n; ++i) {
        squares[i] = (int)((i + 1) * (i + 1));
        printf("%d%s", squares[i], i + 1 == n ? "\n" : " ");
    }
    free(squares);
    return 0;
}
