/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038  */
/* 04_2 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

int main(int argc, char* argv[]) {
	int i;
	int sum = 0;

	for (i = 0; i < 1000; i++) {
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}

	printf("Die Summe aller Vielfachen von 3 oder 5 unter 1000 ist: %d\n", sum);

	return 0;
}