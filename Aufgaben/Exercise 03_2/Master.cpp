/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 03_2 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include <math.h>

/* Deklaration der Funktionsprototypen */
void allgemein(double I, double T, double Rt, double L, double i);
void speziell(double I, double T, double Rt, double L, double i);

int main(int argc, char* argv[]) {
	/* Investition */
	double I = 0;
	/* Betrachtungsdauer */
	double T = 0;
	/* Rückfluss */
	double Rt = 0;
	/* Liquidationserlös */
	double L = 0;
	/* Kalkulationszinssatz */
	double i = 0;

	printf("Bitte geben sie die Investition I an.\n");
	scanf("%d", &I);
	printf("Bitte geben sie die Betrachtungsdauer T an.\n");
	scanf("%d", &T);
	printf("Bitte geben sie den Rückfluss Rt an.\n");
	scanf("%d", &Rt);
	printf("Bitte geben sie den Liquidationserlös L an.\n");
	scanf("%d", &L);
	printf("Bitte geben sie den Kalkulationszinssatz i an.\n");
	scanf("%d", &i);

	allgemein(I, T, Rt, L, i);
	speziell(I, T, Rt, L, i);

	return 0;
}

void allgemein(double I, double T, double Rt, double L, double i) {
	double summe = 0.0;
	double result = 0.0;
	int t = 0;

	for (t = 1; t <= T; t++) {
		summe += (Rt * pow(1 + i, -t));
	}

	result = summe - I + (L * pow(1 + i, -T));

	printf("Kapitalwert nach der allgemeinen Implementierung: %f\n", result);
}

void speziell(double I, double T, double Rt, double L, double i) {
	double left_term = -I;
	double middle_term = Rt*(pow((1 + i), T) - 1 / pow((1 + i), T) * i);
	double right_term = L * pow((1 + i), T);

	double result = left_term + middle_term + right_term;

	printf("Kapitalwert nach der speziellen Implementierung: %f\n", result);
}