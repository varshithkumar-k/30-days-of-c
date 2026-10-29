/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>
#include <string.h>

int main(void) {
    const char text[] = "Study a little every day";
    size_t vowels = 0;
    for (size_t i = 0; text[i] != '\0'; ++i)
        if (strchr("aeiouAEIOU", text[i]) != NULL) ++vowels;
    printf("Vowels: %zu\n", vowels);
    return 0;
}
