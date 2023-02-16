#include <stdio.h>

int main(void) {
	char ime, prezime, maxime = 'A', maxprezime = 'A', minime = 'Z', minprezime = 'Z';
	printf("Unesite inicijale osobe:\n");

	scanf_s(" %c", &ime);
	scanf_s(" %c", &prezime);
	if (maxprezime < prezime) {
		maxime = ime;
		maxprezime = prezime;
	}
	if (maxprezime == prezime && maxime < ime) {
		maxime = ime;
	}
	if (minprezime > prezime) {
		minime = ime;
		minprezime = prezime;
	}
	if (minprezime == prezime && minime > ime) {
		minime = ime;
	}

	while (ime != 'O' && prezime != 'O') {

		printf("Unesite inicijale:\n");
		scanf_s(" %c", &ime);
		scanf_s(" %c", &prezime);

		if (maxprezime < prezime) {
			maxime = ime;
			maxprezime = prezime;
		}
		if (maxprezime == prezime && maxime < ime) {
			maxime = ime;
		}
		if (minprezime > prezime) {
			minime = ime;
			minprezime = prezime;
		}
		if (minprezime == prezime && minime > ime) {
			minime = ime;
		}

	}
	printf("prva osoba po abecedi je: %c%c\n", minprezime, minime);
	printf("zadnja osoba po abecedi je: %c%c", maxprezime, maxime);
	return 0;
}
