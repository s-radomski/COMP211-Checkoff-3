#include <stdio.h>
#include <string.h>
//compile and run
void compare(const char *s) {
    char out[100] = "";
    int i = 0, len = 0;
    while (s[i] != '\0') {
        int count = 1;
        while (s[i + count] == s[i]) count++;
        len += sprintf(out + len, "%d%c", count, s[i]);
        i += count;
    }
    printf("%-22s -> %-22s (%zu -> %d chars)\n", s, out, strlen(s), len);
}

int main(void) {
    compare("WWWWWWWWWWBBBWWWWWWW");   // a row of image pixels: shrinks
    compare("HELLO WORLD");            // normal text: grows!
    return 0;
}
