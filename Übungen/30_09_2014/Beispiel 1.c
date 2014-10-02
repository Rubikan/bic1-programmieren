/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS

/* Programmcode hier einfügen */
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
/* Deklaration der Funktionsprototypen */
double seite_b(double a, double b);
double umfang(double a, double b, double c);
double flaeche(double a, double b);
double sinalpha(double a, double c);
double cosalpha(double a, double c);
double sinbeta(double b, double c);
double cosbeta(double b, double c);

int main(int argc, char* argv[]) {
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double alpha = 0.0;
	double beta = 0.0;

	printf("Bitte geben Sie die Seite A des rechtwinkligen Dreiecks in CM an. \n");
	scanf("%lf", &a);
	printf("Bitte geben Sie die Seite C des rechtwinkligen Dreiecks in CM an. \n");
	scanf("%lf", &c);
	b = seite_b(a, c);

	printf("Seite B: %f\n", b);
	printf("Umfang: %f\n", umfang(a, b, c));
	printf("Flaeche: %f\n", flaeche(a, b));
	alpha = (asin(sinalpha(a, c)) * 180) / M_PI;
	printf("Alpha: %f°\n", alpha);
	beta = 90 - alpha;
	printf("Beta: %f°\n", beta);
	printf("Sin Alpha: %f\n", sinalpha(a, c));
	printf("Sin Beta: %f\n", sinbeta(b, c));
	printf("Cos Alpha: %f\n", cosalpha(b, c));
	printf("Cos Beta: %f\n", cosbeta(a, c));

	return 0;
}

double seite_b(double a, double c) {
	return sqrt(pow(c, 2) - pow(a, 2));
}

double umfang(double a, double b, double c) {
	return a + b + c;
}

double flaeche(double a, double b) {
	return (a * b) / 2;
}

double sinalpha(double a, double c) {
	return a / c;
}

double cosalpha(double b, double c) {
	return b / c;
}

double sinbeta(double b, double c) {
	return b / c;
}

double cosbeta(double a, double c) {
	return a / c;
}