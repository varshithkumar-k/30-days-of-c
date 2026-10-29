/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    const char text[] = "  Learn C  every day! ";
    size_t words = 0; int in_word = 0;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        if (isspace((unsigned char)text[i])) in_word = 0;
        else if (!in_word) { ++words; in_word = 1; }
    }
    printf("Words: %zu\n", words);
    return 0;
}
