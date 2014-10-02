/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* Exercise 01_1 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Definition der Konstanten */
const double UST10 = 10;
const double UST20 = 20;

/* Definition der Funktionsprototypen */
double calc_ust10(double brutto);
double calc_ust20(double brutto);

int main(int argc, char* argv[]) {
	double brutto = 0;

	printf("Bitte geben Sie den Bruttobetrag ein: ");
    scanf("%lf", &brutto);
	printf("Netto mit 10%% UST: %6.2f \n", calc_ust10(brutto));
	printf("Netto mit 20%% UST: %6.2f \n", calc_ust20(brutto));

	return 0;
}

double calc_ust10(double brutto) {
	return brutto / (100.0 * UST10) * 100.0;
}

double calc_ust20(double brutto) {
	return brutto / (100.0 * UST20) * 100.0;
}