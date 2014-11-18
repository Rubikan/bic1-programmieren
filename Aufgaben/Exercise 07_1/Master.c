/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 07_1 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Funktionsprototypen */
void increment(double *value);
void decrement(double *value);
void test(double value1, double value2);

int main(int argc, char* argv[]) {
	double num = 50;

	increment(&num);
	test(num, 51);
	decrement(&num);
	test(num, 50);

	return 0;
}

void increment(double *number) {
	(*number)++;
}

void decrement(double *number) {
	(*number)--;
}

void test(double value1, double value2) {
	if (value1 == value2) {
		printf("TEST PASSED! %f is equal %f.\n", value1, value2);
	} else {
		printf("TEST FAILED! %f is not equal %f.\n", value1, value2);
	}
}