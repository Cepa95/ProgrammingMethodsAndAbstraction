#include <stdio.h>
#include <math.h>

int broj_znamenaka(broj) {
    int brojac = 0;
    while (broj > 0) {
        broj = broj / 10;
        brojac += 1;
    }
    return brojac;
}

int potencirano(int zbrojeno) {
    int deset = 10, potencija; {
        potencija = pow(deset, zbrojeno);
    }
    return potencija;
}

int potencirani_broj(int broj) {
    int potencirani_broj, kubirano = 3; {
        potencirani_broj = pow(broj, kubirano);
    }
    return potencirani_broj;
}

int main() {
    int broj = 1, zbrojeno;
    int dodatno, pot_broj;
    while (broj != 0) {
        printf("Upisite neki broj:\n");
        scanf("%d", &broj);
        if (broj == 0) {
            break;
        }
        zbrojeno = broj_znamenaka(broj);
        dodatno = potencirano(zbrojeno);
        pot_broj = potencirani_broj(broj);
        if (broj == (pot_broj % dodatno)) {
            printf("broj %d^3 je trimorfan = %d.\n", broj, pot_broj);
        }
        else {
            printf("broj %d nije trimorfan\n", broj);
        }
    }
    return 0;
}