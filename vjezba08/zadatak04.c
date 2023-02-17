#include <stdio.h>
#include <string.h>
struct Time
{
	char vrijeme[20];

}time1, time2;

void sat(char prvo_vrijeme[], char drugo_vrijeme[], char* razlika_kraj)
{
	int sat1, minuta1, sekunda1, sat2, minuta2, sekunda2, vremenska_razlika;
	char tocka1[5], tocka2[5], tocka3[5], tocka4[5];
	sscanf(prvo_vrijeme, "%d %s %d %s %d", &sat1, &tocka1, &minuta1, &tocka2, &sekunda1);
	sscanf(drugo_vrijeme, "%d %s %d %s %d", &sat2, &tocka3, &minuta2, &tocka4, &sekunda2);
	int rezultat1 = sat1 * 3600 + minuta1 * 60 + sekunda1;
	int rezultat2 = sat2 * 3600 + minuta2 * 60 + sekunda2;
	if (rezultat1 >= rezultat2)
	{
		vremenska_razlika = rezultat1 - rezultat2;
		int razlika_sat = vremenska_razlika / 3600;
		int razlika_minuta = (vremenska_razlika - razlika_sat * 3600) / 60;
		int razlika_sekunda = (vremenska_razlika - razlika_sat * 3600) % 60;
		sprintf(razlika_kraj, "%d:%d:%d", razlika_sat, razlika_minuta, razlika_sekunda);

	}
	else
	{
		vremenska_razlika = rezultat2 - rezultat1;
		int razlika_sat = vremenska_razlika / 3600;
		int razlika_minuta = (vremenska_razlika - razlika_sat * 3600) / 60;
		int razlika_sekunda = (vremenska_razlika - razlika_sat * 3600) % 60;
		sprintf(razlika_kraj, "%d:%d:%d", razlika_sat, razlika_minuta, razlika_sekunda);
	}

}

int main(void)
{
	char razlika_kraj[10];
	strcpy(time1.vrijeme, "15: 10: 05");
	strcpy(time2.vrijeme, "10: 00: 00");
	sat(time1.vrijeme, time2.vrijeme, &razlika_kraj);
	printf("%s", razlika_kraj);
	return 0;
}