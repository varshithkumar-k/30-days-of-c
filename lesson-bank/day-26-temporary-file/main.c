/* Original AI-assisted C17 learning example. No third-party code copied. */
#include <stdio.h>

int main(void) {
    FILE *file = tmpfile();
    if (file == NULL) { perror("tmpfile"); return 1; }
    if (fputs("Practice completed\n", file) == EOF || fflush(file) == EOF) { fclose(file); return 1; }
    rewind(file);
    char line[64];
    if (fgets(line, sizeof line, file) == NULL) { fclose(file); return 1; }
    fputs(line, stdout);
    if (fclose(file) != 0) return 1;
    return 0;
}
