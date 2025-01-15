#include <stdio.h>
#include <stdbool.h>

/* replace one or more "blanks" with a single blank */
int main() {
    for (int c = getchar(); c != EOF; c = getchar()) {
        putchar(c);
        bool isSpace = false;
        for (;c == ' ' || c == '\t' || c == '\n'; c = getchar()) {
            isSpace = true;
        }
        if (isSpace) {
            putchar(c);
        }
    }
}
