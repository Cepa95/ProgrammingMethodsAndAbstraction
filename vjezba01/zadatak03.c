#include <stdio.h>

int main(void) {

	int broj, modul, postupak, novibroj;
	printf("Unesi troznamenkasti broj:\n");
	scanf_s("%d", &broj);

	novibroj = broj;
	postupak = 0;

	while (novibroj != 0) {
		modul = novibroj % 10;
		postupak = postupak + modul * modul * modul;
		novibroj = novibroj / 10;
	}
	if (postupak == broj && broj >= 100 && broj <= 999)
		printf("%d je troznamenkasti Amstrongov broj", broj);
	else
		printf("%d nije troznamenkasti Armstrongov broj", broj);

	return 0;

}

