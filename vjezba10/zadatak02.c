#include <stdio.h>
#include <math.h>

int palindrom(int pal)
{
    int znamenka = log10(pal);
    if (pal == 0)
    {
        return 0;
    }
    else
    {
        return ((pal % 10 * pow(10, znamenka)) + palindrom(pal / 10));
    }
}


int main()
{
    int broj = 31313, provjera;
    provjera = palindrom(broj);

    if (broj == provjera)
    {
        printf("broj %d je palindrom.\n", broj);
    }
    else
    {
        printf("broj %d nije palindrom.\n", broj);
    }
    return 0;
}