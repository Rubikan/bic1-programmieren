/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038  */
/* 1-3   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS

/* Symbolische Konstanten */
#define ADDIEREN 1
#define SUBTRAHIEREN 2
#define MULTIPLIZIEREN 3
#define DIVIDIEREN 4
#define FAKULTAET 5
#define ABBRUCH 6

/* Programmcode hier einfügen */
#include <stdio.h>

void add(double a, double b);
void sub(double a, double b);
void mul(double a, double b);
void div(double a, double b);
void fac(int a);

int main(int argc, char* argv[]) {
	double a = 0;
	double b = 0;
	int op = 0;
	int calc = 1;

	while (calc) {
		printf("Bitte geben sie die erste Zahl ein!\n");
		scanf("%lf", &a);
		printf("Bitte geben sie die zweite Zahl ein!\n");
		scanf("%lf", &b);
		printf("Bitte geben sie den Operator ein!\n");
		scanf("%d", &op);

		switch (op) {
		case ADDIEREN:
			add(a, b);
			break;
		case SUBTRAHIEREN:
			sub(a, b);
			break;
		case MULTIPLIZIEREN:
			mul(a, b);
			break;
		case DIVIDIEREN:
			div(a, b);
			break;
		case FAKULTAET:
			fac(a);
			break;
		case ABBRUCH:
			calc = 0;
			break;
		}
	}

	return 0;
}

void add(double a, double b) {
	printf("%f + %f = %f\n", a, b, a + b);
}

void sub(double a, double b) {
	printf("%f - %f = %f\n", a, b, a - b);
}

void mul(double a, double b) {
	printf("%f * %f = %f\n", a, b, a * b);
}

void div(double a, double b) {
	if (b == 0)
		printf("Der Divisor darf nicht 0 sein!\n");
    else {
		printf("%d / %d = %d\n", (int)a, (int)b, (int)a / (int)b);
        printf("Divisionsrest = %d\n", (int)a % (int)b);
    }
}

void fac(int a) {
	int result = 1;
	int i;

	if (a == 0) {
		printf("Fakultaet von 0 = 1\n");
	} else {
		for (i = 1; i <= a; i++) {
			result *= i;
		}
		printf("Fakultaet von %d = %d\n", a, result);
	}
}