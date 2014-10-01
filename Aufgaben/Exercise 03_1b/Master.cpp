/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 03_1b   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Deklaration der Funktionsprototypen */
int get_sum_100();
int get_sum_n(int n);

int main(int argc, char* argv[]) {
	int n = 0;
	int sum_100;
	int sum_n;
	
	printf("Bis zu welcher Zahl moechten sie die nat. Zahlen aufsummiert haben?\n");
	scanf("%d", &n);
	sum_100 = get_sum_100();
	sum_n = get_sum_n(n);
	printf("Die Summe aller natuerlichen Zahlen von 1 bis 100 ist %d\n", sum_100);
	printf("Die Summe aller natuerlichen Zahlen von 1 bis %d ist %d\n", n, sum_n);

	return 0;
}

int get_sum_100() {
	int i;
	int sum = 0;

	for (i = 0; i <= 100; i++) {
		sum += i;
	}

	return sum;
}

int get_sum_n(int n) {
	int i = 0;
	int sum = 0;

	while (i <= n) {
		sum += i;
		i++;
	}

	return sum;
}