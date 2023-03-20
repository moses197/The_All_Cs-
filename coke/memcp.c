#include <stdio.h>

void *memcpy(void *dest, void *src, int count_int)
{
    char *d = dest, char *s = src;
    
    while(count_int--)
    {
        *d++ = *s++;
        
    }

    return dest;

}

int main(void) {
    //
}