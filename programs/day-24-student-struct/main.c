/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    struct Student { const char *name; int marks[3]; };
    struct Student student = {"Learner", {72, 81, 90}};
    int total = 0;
    for (size_t i = 0; i < 3; ++i) total += student.marks[i];
    printf("%s: %d/300\n", student.name, total);
    return 0;
}
