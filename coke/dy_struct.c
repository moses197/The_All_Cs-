#include <stdio.h>



struct car {
    char *name;
    float price;
    int speed;
};

void set_price(struct car *c, float new_price);

int main(void) {
    struct car saturn = {.name="McLaren", .speed=250};

    set_price(&saturn, 200000.00);
    printf("%.2f\n", saturn.price);
}

void set_price(struct car *c, float new_price) {
    c->price = new_price;
}

/* Note that we can use the "(*c).price = new_price;"
   to also set the price but the thing the syntax is just too ugly to
   read and write and i will this shit to be readable!
*/