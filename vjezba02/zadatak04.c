#include <stdio.h>

int main(void) {
	unsigned int broj, brojac;
	printf("Unesite neki broj izmedu 0 i 4294967295:\n");
	scanf_s("%u", &broj);
	brojac = 0;
	while (broj != 0) {
		broj = broj / 10;
		brojac = brojac + 1;

	}
	printf("%u", brojac);




	return 0;
}
