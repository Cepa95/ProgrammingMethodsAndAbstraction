#include <stdio.h>

int zbroji(broj) {
	int brojac;
	brojac = 0;
	while (broj != 0) {
		broj = broj / 10;
		brojac = brojac + 1;

	}
	return brojac;
}

int main() {
	unsigned int broj;
	int k;
	printf("Unesite neki broj izmedu 0 i 4294967295:\n");
	scanf_s("%u", &broj);
	k = zbroji(broj);
	printf("broj znamenki broja iznosi: %d", k);

	return 0;
}