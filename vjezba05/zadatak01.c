#include <stdio.h>

int uvjetni_operator(int a, int b, int c)
{
    int temp, min;
    temp = (a <= b) ? a : b;
    min = (c <= temp) ? c : temp;
    return min;
}

int main(void)
{
    int a, b, c, d;
    printf("Unesite tri broja:\n ");
    scanf("%d %d %d", &a, &b, &c);

    d = uvjetni_operator(a, b, c);
    printf("najmanji uneseni broj je: %d", d);

    return 0;
}