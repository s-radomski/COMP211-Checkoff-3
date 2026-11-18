#include <stdio.h>
//compile and run executable followed by the string you'd like to decode
void rle_decode(const char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count = count * 10 + (s[i] - '0');   // build up the number (handles "12W")
        } else {
            for (int k = 0; k < count; k++) putchar(s[i]);
            count = 0;
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    // use the word typed after the program name, or a default if there isn't one
    rle_encode(argc > 1 ? argv[1] : "WWWWBBBWWC");
    return 0;
}
