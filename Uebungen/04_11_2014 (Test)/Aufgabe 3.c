/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038  */
/* Beispielnummer */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Deklaration der Funktionsprototypen */
int isprime(int num);

int main(int argc, char* argv[]) {
	double result = 0;
	int intresult = 0;
	int num = 0;
	int num_upper = 0;

	printf("Bitte geben Sie einen Zahlenbereich ein, der ueberprueft werden soll \n");
	scanf("%d", &num);
	scanf("%d", &num_upper);

	for(num; num <= num_upper; num++) {
		if(isprime(num)) {
			printf("Die Zahl %d ist eine Primzahl!\n", num);
		} else {
			//printf("Die Zahl %d ist keine Primzahl!\n", num);
		}
	}

	return 0;
}

int isprime(int num) {
	double result = 0;
	int intresult = 0;
	int i;

	for(i = 1; i <= num; i++) {
		result = num / (double)i;
		intresult = num / i;
		if(i != 1 && i != num && result == intresult) {
			return 0;
		}
	}
	return 1;
}