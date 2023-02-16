#include <stdio.h>

void binarni_zapis(int n)
{
    if (n > 1)
    {
        binarni_zapis(n >> 1);
    }
    printf("%d", n & 1);
}

int main(void)
{
    int broj;
    printf("Unesite neki n broj:");
    scanf("%d", &broj);
    binarni_zapis(broj);

    return 0;
}