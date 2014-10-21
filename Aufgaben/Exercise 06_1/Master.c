/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 06_1 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Definition der Funktionsprototypen */
double getSteuer(double brutto, int klasse);
int getClass(double brutto);

int main(int argc, char* argv[]) {
	double brutto;
	double steuersatz;
	int klasse;

	printf("Bitte geben Sie ihr Bruttogehalt ein: ");
	scanf("%lf", &brutto);
	printf("\n");

	klasse = getClass(brutto);
	steuersatz = getSteuer(brutto, klasse);

	printf("Ihre Einkommenssteuer betraegt: %.2f EURO\n", steuersatz);

	return 0;
}

double getSteuer(double brutto, int klasse) {
	switch (klasse) {
		case (1):
			return 0;
			break;
		case (2):
			return ((brutto - 11000) * 5110) / 14000;
			break;
		case (3) :
			return (((brutto - 25000) * 15125) / 35000) + 5110;
			break;
		case (4) :
			return ((brutto - 60000) * 0.5) + 20235;
			break;
	}
}

int getClass(double brutto) {
	if (brutto <= 11000)
		return 1;
	if (brutto > 11000 && brutto <= 25000)
		return 2;
	if (brutto > 25000 && brutto <= 60000)
		return 3;
	if (brutto > 60000)
		return 4;
}