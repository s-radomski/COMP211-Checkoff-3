#include <stdio.h>

void rle_encode(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        int count = 1;
        while (s[i + count] == s[i]) count++;   // count how long the run is
        printf("%d%c", count, s[i]);
        i += count;                              // jump past the run
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    // use the word typed after the program name, or a default if there isn't one
    rle_encode(argc > 1 ? argv[1] : "WWWWBBBWWC");
    return 0;
}
