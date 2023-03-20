#include <stdio.h>
#include <string.h>

size_t my_strlen(char *s);

int main(void) {
    char *s = "Hello, world!";

    printf("The length of the string is %zu\n", my_strlen(s));

    // for (int i =0; i < 13; i++) {
    //     printf("%c", s[i]);
    // }
    // printf("\n");
}

size_t my_strlen(char *s) {
    int count = 0;

    while(s[count] != '\0') {
        count++;
    }

    return count;
}