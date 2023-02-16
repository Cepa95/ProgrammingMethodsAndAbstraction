#include <stdio.h>

int funkcija(int a, int b)
{
    int c;
    c = (a >= b) ? a - b : a + b;
    return c;
}

int main(void)
{
    int a, b, d;
    printf("Unesite dva broja:\n ");
    scanf("%d %d", &a, &b);

    d = funkcija(a, b);

    printf("Ako je prvi uneseni broj veci ili jednak od drugog program ce oduzeti ta dva unesena broja, u suprotnom ce ih zbrojiti:\n %d", d);

    return 0;
}