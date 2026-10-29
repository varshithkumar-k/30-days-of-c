/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    struct Session { const char *topic; unsigned minutes; int done; };
    const struct Session sessions[] = {{"Loops", 25, 1}, {"Arrays", 30, 0}, {"Pointers", 20, 0}};
    unsigned remaining = 0; size_t completed = 0;
    size_t count = sizeof sessions / sizeof sessions[0];
    for (size_t i = 0; i < count; ++i) {
        if (sessions[i].done) ++completed;
        else { remaining += sessions[i].minutes; printf("Next: %s\n", sessions[i].topic); }
    }
    printf("Completed: %zu/%zu; remaining: %u minutes\n", completed, count, remaining);
    return 0;
}
