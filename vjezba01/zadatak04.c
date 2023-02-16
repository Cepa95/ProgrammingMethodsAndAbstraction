
#include <stdio.h>

int main(void) {
	int prvi, drugi, treci, cetvrti;
	printf("Unesite intervale u obliku [broj:broj],[broj:broj]\n");
	printf("Unesite prvi i drugi interval:\n");
	scanf_s("[%d:%d],[%d:%d]", &prvi, &drugi, &treci, &cetvrti);

	int pocetak, kraj;
	if (prvi <= treci) {
		pocetak = treci;
	}
	if (treci <= prvi) {
		pocetak = prvi;
	}
	if (drugi <= cetvrti) {
		kraj = drugi;
	}
	if (cetvrti <= drugi) {
		kraj = cetvrti;
	}
	if (pocetak > kraj)
		printf("presjek je prazan skup \n");

	if (kraj > pocetak)
		printf("[%d:%d]", pocetak, kraj);

	else
		printf("Krivo unoseni podaci");

	return 0;
}
