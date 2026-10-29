/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    int year = 2028;
    int leap = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
    printf("%d: %s\n", year, leap ? "leap year" : "common year");
    return 0;
}
