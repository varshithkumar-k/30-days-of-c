/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    struct Expense { const char *label; unsigned rupees; };
    const struct Expense expenses[] = {{"Travel", 60}, {"Lunch", 80}, {"Notebook", 40}};
    unsigned total = 0;
    for (size_t i = 0; i < sizeof expenses / sizeof expenses[0]; ++i) {
        printf("%s: %u\n", expenses[i].label, expenses[i].rupees);
        total += expenses[i].rupees;
    }
    printf("Total: %u rupees\n", total);
    return 0;
}
