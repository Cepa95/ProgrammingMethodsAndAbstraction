#include<stdio.h> 

int jedna_znamenka(broj) {
    int ostatak, modul;

    while (broj > 9) {
        ostatak = 0;
        while (broj != 0) {
            modul = broj % 10;
            ostatak += modul;
            broj = broj / 10;
        }
        broj = ostatak;
    }
    return broj;
}

int main(void) {
    int broj, k;
    printf("Unesite neki broj:\n ");
    scanf("%d", &broj);
    k = jedna_znamenka(broj);
    printf("Zbrajanje do jedne znamenke: %d", k);

    return 0;
}