/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "coding";
    size_t length = strlen(text);
    for (size_t i = 0; i < length / 2; ++i) {
        char saved = text[i]; text[i] = text[length - 1 - i]; text[length - 1 - i] = saved;
    }
    puts(text);
    return 0;
}
