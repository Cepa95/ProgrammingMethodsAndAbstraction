#include <stdio.h>
#include <stdlib.h>

int main(void) {

	short int a = 65, b = 90, n, broj, y;
	printf("unesite zeljeni broj brojeva:\n");
	scanf_s("%hd", &n);
	do {
		printf("Unesite neki short int broj:\n");
		scanf_s("%hd", &broj);
		if (broj < 0) {
			printf(":\n");
		}
		else if (broj > 90) {
			y = a + rand() % (b - a + 1);
			char iznad = (char)y;
			printf("%c\n", iznad);
		}
		else if (broj < 65) {
			y = a + rand() % (b - a + 1);
			char iznad = (char)y;
			printf("%c\n", iznad);

		}
		else {
			char unutar = (char)broj;
			printf("Broj se nalazi u zatvorenom intervalu i to je %c\n", broj);
		}

		n = n - 1;
	} while (n > 0);

	return 0;
}
