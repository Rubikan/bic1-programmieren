/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038  */
/* 08_2 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include <math.h>

/* Funktionsprototypen */
int solve_polynomial(double a, double b, double c, double* sol1, double* sol2);

int main(int argc, char* argv[]) {
	double a = 0;
	double b = 0;
	double c = 0;
	double sol1 = 0;
	double sol2 = 0;

	printf("Loesen einer Gleichung der Form ax^2 + bx + c\n");
	printf("Bitte geben sie ein a an: \n");
	scanf("%lf", &a);
	printf("Bitte geben sie ein b an: \n");
	scanf("%lf", &b);
	printf("Bitte geben sie ein c an: \n");
	scanf("%lf", &c);

	if (solve_polynomial(a, b, c, &sol1, &sol2)) {
		printf("Die erste Loesung ist %f, die zweite Loesung ist %f.\n", sol1, sol2);
	} else {
		printf("Diese Gleichung hat keine Loesung in den reelen Zahlen.\n");
	}
}

int solve_polynomial(double a, double b, double c, double *sol1, double *sol2) {
	double term = b*b - 4*a*c;
	if (term < 0) {
		return 0;
	}

	*sol1 = (-b + sqrt(term)) / (2*a);
	*sol2 = (-b - sqrt(term)) / (2*a);

	return 1;
}