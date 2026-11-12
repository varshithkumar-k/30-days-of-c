/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int marks[] = {70, 85, 90, 75};
    size_t count = sizeof marks / sizeof marks[0];
    int sum = 0;
    for (size_t i = 0; i < count; ++i) sum += marks[i];
    printf("Average: %.2f\n", (double)sum / count);
    return 0;
}
