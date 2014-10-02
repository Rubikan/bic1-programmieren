/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 04_1a   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include <math.h>

/* Deklaration der Prototypen */
void add(double a, double b);
void div(double b, double a);
void modulo(double a, double b);
void power(double a);

int main(int argc, char* argv[]) {
	double a = 0.0;
	const double b = 5;
	int i;

	for (i = 0; i < 5; i++) {
		printf("Geben sie eine Zahl fuer a an:\n");
		scanf("%lf", &a);
		switch (i) {
			case 0:
				add(a, b);
				break;
			case 1:
				div(b, a);
				break;
			case 2:
				modulo(a, b);
				break;
			case 3:
				power(a);
				break;
			default:
				printf("Your Input was %f\n", a);
				break;
		}
	}
	
	return 0;
}

void add(double a, double b) {
	double result = a + b;
	printf("%f + %f = %f\n", a, b, result);
}

void div(double b, double a) {
	if (a == 0) {
		printf("Der Divisor darf nicht 0 sein! Die Division wird nicht durchgefuehrt.\n");
	} else {
		double result = b / a;
		printf("%f / %f = %f\n", b, a, result);
	}	
}

void modulo(double a, double b) {
	int result = (int)a % (int)b;
	printf("%d %% %d = %d\n", (int)a, (int)b, result);
}

void power(double a) {
	double result = pow(a, 2);
	printf("%f hoch 2 = %f\n", a, result);
}