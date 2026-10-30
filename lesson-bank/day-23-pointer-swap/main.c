/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>
static void swap(int *a, int *b) { int saved = *a; *a = *b; *b = saved; }

int main(void) {
    int a = 5, b = 12;
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}
