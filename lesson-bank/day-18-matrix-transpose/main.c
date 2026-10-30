/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (size_t column = 0; column < 3; ++column) {
        for (size_t row = 0; row < 2; ++row)
            printf("%d%s", matrix[row][column], row == 1 ? "\n" : " ");
    }
    return 0;
}
