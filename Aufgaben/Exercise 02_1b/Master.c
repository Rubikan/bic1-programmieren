/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* Exercise 02_1b   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Definition der Funktionsprototypen */
double mult_real(double a, double b, double c);

int main(int argc, char* argv[]) {
	double a = 0;
	double b = 0;
	double c = 0;

	printf("Bitte geben Sie die erste reelle Zahl ein: \n");
    scanf("%lf", &a);
	printf("Bitte geben Sie die zweite reelle Zahl ein: \n");
    scanf("%lf", &b);
	printf("Bitte geben Sie die dritte reelle Zahl ein: \n");
    scanf("%lf", &c);

	printf("ERGEBNIS: %6.2f \n", mult_real(a, b, c));

	return 0;
}

double mult_real(double a, double b, double c) {
	return a * b * c;
}