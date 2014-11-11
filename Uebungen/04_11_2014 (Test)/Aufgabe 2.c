/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038  */
/* Beispielnummer */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

int main(int argc, char* argv[]) {
	double result = 0;
	int intresult = 0;
	int num = 0;
	int i;

	printf("Bitte geben Sie die Zahl ein, die ueberprueft werden soll \n");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++) {
		result = num / (double)i;
		intresult = num / i;
		if(i != 1 && i != num && result == intresult) {
			printf("Die Zahl %d ist keine Primzahl!\n", num);
			return 0;
		}
	}
	printf("Die Zahl %d ist eine Primzahl!\n", num);

	return 0;
}