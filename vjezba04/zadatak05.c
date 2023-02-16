#include <stdio.h>

void year(int dan, int mjesec, int godina) {

    if (godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0)
        printf("Godina je prijestupna");
    else
        printf("Godina nije prijestupna");
    if ((dan >= 1 && dan <= 31) && (mjesec >= 1 && mjesec <= 12) && (godina >= 1900 && godina <= 2019)) {
        if ((mjesec == 4 || mjesec == 6 || mjesec == 9 || mjesec == 11) && dan <= 30) {
            printf(" i datum je validan.\n");
        }
        else if ((mjesec == 1 || mjesec == 3 || mjesec == 5 || mjesec == 7 || mjesec == 8 || mjesec == 10 || mjesec == 12) && dan <= 30) {
            printf(" i datum je validan.\n");
        }
        else if (mjesec == 2 && dan <= 29 && (godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0)) {
            printf(" i datum je validan.\n");
        }
        else if (mjesec == 2 && dan <= 28 && (godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0) != 1) {
            printf(" i datum je valiidan.\n");
        }
        else {
            printf(" i datum nije validan.\n");
        }
    }
    else
        printf(" i datum nije validan.\n");
}

int main()
{
    int dan, mjesec, godina, n;
    printf("Unesite koliko datuma rodenja zelite upisati:\n");
    scanf("%d", &n);
    while (n != 0) {
        printf("Unesite dan, mjesec i godinu:\n");
        scanf("%d %d %d", &dan, &mjesec, &godina);
        year(dan, mjesec, godina);
        n -= 1;
    }
    return 0;
}