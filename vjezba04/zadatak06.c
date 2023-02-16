#include <stdio.h>

int year(int dan, int mjesec, int godina) {
    int brojrodendana, danas = 4, danasmjesec = 4, danasgodina = 2022;

    if ((dan >= 1 && dan <= 31) && (mjesec >= 1 && mjesec <= 12) && (godina >= 1900 && godina <= 2019)) {
        if ((mjesec == 4 || mjesec == 6 || mjesec == 9 || mjesec == 11) && dan <= 30)
        {
            if (mjesec <= danasmjesec) {
                if (dan >= danas) {
                    brojrodendana = (danasgodina - 1 - godina);
                }
                else {
                    brojrodendana = (danasgodina - godina);
                }
            }

            else {
                brojrodendana = (danasgodina - 1 - godina);
                return brojrodendana;
            }
        }

        else if ((mjesec == 1 || mjesec == 3 || mjesec == 5 || mjesec == 7 || mjesec == 8 || mjesec == 10 || mjesec == 12) && dan <= 30)
        {
            if (mjesec <= danasmjesec) {
                if (dan >= danas) {
                    brojrodendana = (danasgodina - 1 - godina);
                    return brojrodendana;
                }
                else {
                    brojrodendana = (danasgodina - godina);
                    return brojrodendana;
                }
            }

            else {
                brojrodendana = (danasgodina - 1 - godina);
                return brojrodendana;
            }
        }


        else if (mjesec == 2 && dan <= 29 && (godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0)) {
            brojrodendana = (danasgodina - godina) / 4;
            return brojrodendana;
        }


        else if (mjesec == 2 && dan <= 28 && (godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0) != 1)
        {
            if (mjesec <= danasmjesec) {
                if (dan >= danas) {
                    brojrodendana = (danasgodina - 1 - godina);
                    return brojrodendana;
                }
                else {
                    brojrodendana = (danasgodina - godina);
                    return brojrodendana;
                }
            }

            else {
                brojrodendana = (danasgodina - 1 - godina);
                return brojrodendana;
            }
        }

        else {
            return 0;
        }

    }
    else
        return 0;
}


int main()
{
    int dan, mjesec, godina = 1, broj;
    while ((godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0) != 1) {
        printf("Unesite dan, mjesec i godinu:\n");
        scanf("%d %d %d", &dan, &mjesec, &godina);
        broj = year(dan, mjesec, godina);
        if (broj == 0) {
            printf("Uneseni su krivi podaci ili datum.\n");
        }
        else {
            printf("Osoba je do sada slavila broj rodendana:%d\n", broj);
        }
    }
    return 0;
}
