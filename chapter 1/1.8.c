#include <stdio.h>

int main() {
    int c;
    int blanks = 0, tabs =0, newlines = 0;
    
    
    printf("test input:\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            blanks++;
        else if (c == '\t')
            tabs++;
        else if (c == '\n')
            newlines++;
    }

    printf("\nblanks: %d", blanks);
    printf("\ntabs: %d", tabs);
    printf("\nnewlines: %d\n", newlines);

}