/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 05_1 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

int main(int argc, char* argv[]) {
	int i;
	int found = 0;
	int result = 0;

	do {
		result++;
		for (i = 1; i <= 20; i++) {
			if (result % i == 0) {
				found = 1;
			} else {
				found = 0;
				break;
			}
		}
	} while (!found);

	printf("Das Ergebnis ist %d\n", result);

	return 0;
}