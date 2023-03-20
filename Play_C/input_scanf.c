#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFSIZE 4096

int main(int argc, char **argv) {

    char item[BUFSIZE];
    char delim;
    int item_count = 0;

    while(scanf("%[^,\n]%c", item, &delim) != EOF)
        printf("%s, ", item);
        item_count++;
        if (delim == '\n') {
            printf(" (%d items)\n", item_count);
            item_count = 0;
        }
}