#include <stdio.h>

int ispis_neparnih(int broj)
{
    if (broj == 1)
    {
        return broj;
    }
    if (broj % 2 != 0)
    {
        printf("%d\n", broj);
    }
    return ispis_neparnih(broj - 1);
}

int main(void)
{
    int broj = 15;
    ispis_neparnih(broj);
    return 0;
}