#include <stdio.h>
int main(void)
{
	int a, b;
	char c;
	printf("Unesite dva broja:\n");
	scanf_s("%d %d", &a, &b);
	printf("Unesite jedan znak (+,-,*,/):\n");
	scanf_s(" %c", &c);

	if (b == 0 && c == '/')
		printf("Zabranjeno je dijeliti s nula");
	else if (c == '/' && a % b != 0)
		printf("Rezultat djeljenja je %d, a ostatak je %d", a / b, a % b);
	else if (c == '/')
		printf("Rezultat djeljenja je %d", a / b);
	else if (c == '+')
		printf("%d", a + b);
	else if (c == '-')
		printf("%d", a - b);
	else if (c == '*')
		printf("%d", a * b);
	else
		printf("Krivo uneseni podaci");


	return 0;
}