#include <stdio.h>

typedef struct
{
    int brojnik;
    int nazivnik;

}razlomak;

razlomak operacija(razlomak prvi_razlomak, razlomak drugi_razlomak, char* osnovna_operacija)
{
    razlomak treci_razlomak;

    if (osnovna_operacija == '+')
    {
        treci_razlomak.brojnik = prvi_razlomak.nazivnik * drugi_razlomak.brojnik + prvi_razlomak.brojnik * drugi_razlomak.nazivnik;
        treci_razlomak.nazivnik = prvi_razlomak.nazivnik * drugi_razlomak.nazivnik;
    }
    else if (osnovna_operacija == '-')
    {
        treci_razlomak.brojnik = drugi_razlomak.nazivnik * prvi_razlomak.brojnik - prvi_razlomak.nazivnik * drugi_razlomak.brojnik;
        treci_razlomak.nazivnik = prvi_razlomak.nazivnik * drugi_razlomak.nazivnik;
    }
    else if (osnovna_operacija == '*')
    {
        treci_razlomak.brojnik = prvi_razlomak.brojnik * drugi_razlomak.brojnik;
        treci_razlomak.nazivnik = prvi_razlomak.nazivnik * drugi_razlomak.nazivnik;
    }
    else if (osnovna_operacija == '/')
    {
        treci_razlomak.brojnik = prvi_razlomak.brojnik * drugi_razlomak.nazivnik;
        treci_razlomak.nazivnik = prvi_razlomak.nazivnik * drugi_razlomak.brojnik;
    }
    else
    {
        printf("Krivo uneseni podaaci");
    }
    return treci_razlomak;
}


int provjera(int brojnik, int nazivnik)
{
    int brojac = 1;
    while (nazivnik != 0)
    {
        if (brojnik % brojac == 0 && nazivnik % brojac == 0)
        {
            return brojac;
        }
        brojac += 1;
        nazivnik -= 1;
    }
}

int main(void)
{
    char osnovna_operacija;
    int skratiti_razlomak;
    razlomak prvi_razlomak = { 3, 5 };
    razlomak drugi_razlomak = { 2, 3 };
    razlomak treci_razlomak;

    printf("Unesite neki od ponudenih znakova: +,-,*,/:\n");
    scanf("%c", &osnovna_operacija);
    printf("\n");
    treci_razlomak = operacija(prvi_razlomak, drugi_razlomak, osnovna_operacija);
    skratiti_razlomak = provjera(treci_razlomak.brojnik, treci_razlomak.nazivnik);
    printf("%d/%d", (treci_razlomak.brojnik / skratiti_razlomak), (treci_razlomak.nazivnik / skratiti_razlomak));
    return 0;
}