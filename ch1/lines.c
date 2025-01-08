#include <stdio.h>

/* count lines in input */
int main() {
    int c, nl, tab, space;
    nl = 0;
    tab = 0;
    space = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        } else if (c == ' ') {
            space++;
        } else if (c == '\t') {
            tab++;
        }
    }
    printf("newlines: %d tabs: %d spaces: %d\n", nl, tab, space);
}
