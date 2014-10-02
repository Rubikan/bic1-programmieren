/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* Exercise 01_1 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Definition der Funktionsprototypen */
double calc_umfang(double a, double b);
double calc_flaeche(double a, double b);

int main(int argc, char* argv[]) {
	double a = 0; double b = 0;

	printf("Bitte geben Sie die Länge der einen Seite an: ");
    scanf("%lf", &a);
	printf("Bitte geben Sie die Länge der anderen Seite an: ");
    scanf("%lf", &b);
	printf("UMFANG: %6.2f \n", calc_umfang(a, b));
	printf("FLAECHE: %6.2f \n", calc_flaeche(a, b));

	return 0;
}

double calc_umfang(double a, double b) {
	return a+a+b+b;
}

double calc_flaeche(double a, double b) {
	return a*b;
}