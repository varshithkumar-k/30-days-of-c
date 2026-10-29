/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>
#include <string.h>

int main(void) {
    const char text[] = "level";
    size_t length = strlen(text); int palindrome = 1;
    for (size_t i = 0; i < length / 2; ++i)
        if (text[i] != text[length - 1 - i]) palindrome = 0;
    printf("%s: %s\n", text, palindrome ? "palindrome" : "not palindrome");
    return 0;
}
