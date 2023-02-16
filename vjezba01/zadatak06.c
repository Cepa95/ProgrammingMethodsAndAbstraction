#include <stdio.h>

int main() {
    int iznos, medo = 0, tuna = 0, slavuj = 0;
    printf("Unesite iznos u kunama: ");
    scanf("%d", &iznos);
    int kuna = iznos;

    while (iznos > 0) {
        if (iznos >= 5) {
            medo += 1;
            iznos -= 5 ;
        }
        else if (iznos >= 2) {
            tuna += 1;
            iznos -= 2;
        }
        else {
            slavuj += 1;
            iznos -= 1;
        }
    }

    printf("Od iznosa od %d kn treba upotrijebiti %d kovanica od 5 kn, %d kovanica od dvije kune i %d kovanica od jedne kune.", kuna, medo, tuna, slavuj);
    return 0;
}