/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038  */
/* Beispielnummer */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Funktionsprototypen */
int check_inequation(int num);

/* Definition der oberen Grenze */
#define MAX 50

int main(int argc, char* argv[]) {
	int i;
	
	for(i = 0; i <= MAX; i++) {
		if(((2*i)-10) == 0 || (i-2) == 0) {
			continue;
		}
		if(check_inequation(i)) {
			printf("Die Zahl %d erfuellt die Ungleichung\n", i);
		}
	}

	return 0;
}

int check_inequation(int num) {
	float term1 = 0;
	float term2 = 0;
	float x = (float)num;

	term1 = ((2*x)+4) / ((2*x)-10);
	term2 = ((5*x)+3) / (x - 2);

	if(term1 >= term2)
		return 1;
	else
		return 0;
}