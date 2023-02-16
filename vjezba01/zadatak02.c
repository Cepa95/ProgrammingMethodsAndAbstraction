#include <stdio.h>

int main(void)
{
	float a, b, c, d, e, f, g, h, j, l, k;
	printf("Upisite pocetak filma u formatu HH:MM:SS\n ");
	scanf_s("%f:%f:%f", &a, &b, &c);
	d = a * 3600 + b * 60 + c;
	printf("Upisite kraj filma isto u formatu HH:MM:SS\n ");
	scanf_s("%f:%f:%f", &e, &f, &g);
	h = e * 3600 + f * 60 + g;

	if (h > d) {
		j = h - d;
		printf("trajanje filma u satima je:%f, u minutima je:%f, a u sekundima je:%f.", j / 3600, j / 60, j);
	}
	else if (d > h) {
		l = 86400 - d;
		k = h + l;
		printf("trajanje filma u satima je:%f, u minutima je:%f, a u sekundima je:%f.", k / 3600, k / 60, k);
	}
	else {
		printf("Uneseni su krivi podaci");

	}

	return 0;
}
