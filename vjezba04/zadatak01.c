#include<stdio.h>

void oblikpotencije(int broj, int potencija) {
	int i = 0;
	printf("za broj n= %d i k=%d: ", broj, potencija);
	int brojac = 0;
	while (broj > 0) {

		if (broj % potencija == 0) {
			printf("");
		}
		else {
			if (brojac == 0) {
				printf("%d*%d**%d", broj % potencija, potencija, i);
				brojac += 1;
			}
			else {
				printf("+%d*%d**%d", broj % potencija, potencija, i);
			}
		}
		broj = broj / potencija;
		i += 1;
	}
	return;
}

int main() {
	int broj, potencija;
	printf("Unesite neki n broj:\n");
	scanf("%d", &broj);
	printf("Unesite potenciju broja izmedu 2 i 16:\n");
	scanf("%d", &potencija);
	if (potencija >= 2 && potencija <= 16) {
		oblikpotencije(broj, potencija);
	}
	else
		printf("Unesite potenciju broja izmedu 2 i 16.\n");

	return 0;
}
