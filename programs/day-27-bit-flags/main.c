/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    enum { READ = 1u, WRITE = 2u, EXECUTE = 4u };
    unsigned permissions = READ | WRITE;
    printf("Can write: %s\n", (permissions & WRITE) ? "yes" : "no");
    permissions &= ~(unsigned)WRITE;
    printf("Can write: %s\n", (permissions & WRITE) ? "yes" : "no");
    return 0;
}
