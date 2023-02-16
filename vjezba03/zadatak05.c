#include <stdio.h>
#include <math.h>

int povecaj(broj) {
	int brojac = 0, i, novibroj, ostatak, krajnjibroj;
	novibroj = broj;
	krajnjibroj = broj;
	while (broj > 0) {
		broj = broj / 10;
		brojac += 1;
	}
	for (i = 0; i < brojac; i += 1) {
		ostatak = novibroj % 10;
		if (ostatak != 9) {
			krajnjibroj += pow(10, i);
		}
		else {
			krajnjibroj -= 9 * pow(10, i);
		}
		novibroj = novibroj / 10;
	}
	return krajnjibroj;
}


int main(void) {
	int broj = 0, rezultat;

	while (1) {
		printf("Unesite neki broj:\n");
		scanf("%d", &broj);
		if (broj <= 9999) {
			continue;
		}
		else {
			rezultat = povecaj(broj);
			printf("%d", rezultat);
			break;
		}
	}
	return 0;
}

