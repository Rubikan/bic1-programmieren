/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* Exercise 02_2   */

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
	double d = 0;

	printf("Bitte geben Sie die erste reelle Zahl ein: \n");
    scanf("%lf", &a);
	printf("Bitte geben Sie die zweite reelle Zahl ein: \n");
    scanf("%lf", &b);
	printf("Bitte geben Sie die dritte reelle Zahl ein: \n");
    scanf("%lf", &c);
	printf("Bitte geben Sie die vierte reelle Zahl ein: \n");
    scanf("%lf", &d);

	printf("A < B? %d \n", a_kleiner_b(a, b));
	printf("A <= B und B <= C? %d \n", a_kleinergleich_b_b_kleinergleich_c(a, b, c));
	printf("A > B und C > D? %d \n", a_groesser_b_c_groesser_d(a, b, c, d));
	printf("A < C oder B > D? %d \n", a_kleiner_c_b_kleiner_d(a, b, c, d));
	printf("D != 0? %d \n", d_ungleich_0(d));

	return 0;
}

int a_kleiner_b(double a, double b) {
	return a < b;
}

int a_kleinergleich_b_b_kleinergleich_c(double a, double b, double c) {
	return (a <= b) && (b <= c);
}

int a_groesser_b_c_groesser_d(double a, double b, double c, double d) {
	return (a > b) && (c > d);
}

int a_kleiner_c_b_kleiner_d(double a, double b, double c, double d) {
	return (a < c) || (b < d);
}

int d_ungleich_0(double d) {
	return d == 0;
}