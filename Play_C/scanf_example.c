#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv) {
    int x = 7;
    printf("x = %d\n", x);

    int result;
    char nextch;
    do {
        printf("new x? ");
        result = scanf("%d%c", &x, &nextch);  
        fflush(stdin);  
    } while (result == 0 || nextch != '\n');
    
    printf("New x = %d\n", x);

    printf("What's your name? ");
    char name[20];
    scanf("%19s", name);
    printf("Name is %s\n", name);
}