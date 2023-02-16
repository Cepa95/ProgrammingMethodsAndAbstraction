#include <stdio.h>
#include <string.h>

int provjera(char const* string1, char const* string2)
{
	int len1, len2;
	len1 = strlen(string1);
	len2 = strlen(string2);
	if (len1 == len2)
		return 1;
	return 0;

}
void anagram(char* string1, char* string2)
{
	int a, i, j, temp;
	a = provjera(string1, string2);
	int len1 = strlen(string1);
	if (a != 1)
	{
		printf("nisu anagram");
	}
	else
	{
		for (i = 0; i < len1 - 1; i += 1)
		{
			for (j = i + 1; j < len1; j += 1)
			{
				if (string1[i] > string1[j])
				{
					temp = string1[i];
					string1[i] = string1[j];
					string1[j] = temp;
				}
				if (string2[i] > string2[j])
				{
					temp = string2[i];
					string2[i] = string2[j];
					string2[j] = temp;
				}
			}
		}
		for (i = 0; i < len1; i++)
		{
			if (string1[i] == string2[i])
			{
				printf("jesu anagram\n");
				break;

			}
			printf("nisu anagram\n");
		}
	}

}

int main(void)
{

	char string1[10] = "trava";
	char string2[10] = "vatra";
	anagram(string1, string2);
	return 0;
}