/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 05_2 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

int main(int argc, char* argv[]) {
	int i;
	int j;
	int result = 0;

	printf("%-5s%-5s%-5s%-5s%-5s%-5s%-5s%-5s%-5s%-5s%-5s\n", "*", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10");
	for (i = 1; i <= 10; i++) {
		printf("%-5d", i);
		for (j = 1; j <= 10; j++) {
			printf("%-5d", i*j);
		}
		printf("\n");
	}

	return 0;
}