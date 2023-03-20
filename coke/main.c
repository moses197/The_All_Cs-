#include <stdio.h>

int main(void) {
    int a[] = {11, 22, 33, 44, 55, 999};
    int *p = &a[0];
//     // Or "int *p = a;" works just as well
//     for (int i = 0; i < 5; i++) {
//     // printf("%d\n", *(p + i));
//     printf("%d\n", p[i]);
// }

    while (*p != 999) {
    printf("%d\n", *p);
    p++;
    }
}