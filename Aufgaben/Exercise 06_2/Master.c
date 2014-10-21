/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 06_2 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

int main(int argc, char* argv[]) {
	int a;
	int b;
	int c;

	for (a = 1; a < 500; a++) {
		for (b = 1; b < 500; b++) {
			c = 1000 - a - b;
			if (a < b && a*a + b*b == c*c) {
				printf("a: %d, b: %d, c: %d\n", a, b, c); // Lösung a = 200, b = 375, c = 425
			}
		}
	}

	return 0;
}