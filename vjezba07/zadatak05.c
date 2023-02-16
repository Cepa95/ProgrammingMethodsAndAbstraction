#include <stdio.h>
#include <string.h>

void funkcija(const char* string, const char* slovo, char* ptr, char** pp)
{
	ptr = strchr(string, slovo);
	pp = &ptr;
	string = *pp;

	printf("%s", string);
}

int main(void)
{
	const char string[] = "ONoffON";
	const char slovo = 'o';
	char* ptr;
	char* pp;
	funkcija(string, slovo, &ptr, &pp);
	return 0;
}

