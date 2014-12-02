/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Andreas Rubik */
/* 1410258038 */
/* 09_1 */

#include <stdio.h>
#include "helpers.h"
#include "arraystats.h"
#define SIZE 11

int main(int argc, char* argv[]) {
	int data[SIZE];
	fill_random(data, SIZE);
	int sorted[SIZE];
	for (int i = 0; i < SIZE; i++) {
		sorted[i] = data[i];
	}
	bubblesort(sorted, SIZE);

	printf("Der Inhalt des Arrays ist: \n"); print_array(data, SIZE);
	printf("Der Inhalt des sortierten Arrays ist: \n"); print_array(sorted, SIZE);
	printf("Der Durchschnitt der im Array enthaltenen Zahlen ist %.2f\n", average(data, SIZE));
	printf("Der Median der im Array enthaltenen Zahlen ist %.2f\n", median(data, SIZE));
	printf("Die kleinste Zahl in dem Array ist %d\n", minimum(data, SIZE));
	printf("Die groesste Zahl in dem Array ist %d\n", maximum(data, SIZE));
	printf("Die Summe der im Array enthaltenen Zahlen ist %d\n", sum(data, SIZE));
	printf("Die Varianz der im Array enthaltenen Zahlen ist %.2f\n", variance(data, SIZE));
	printf("Die Standardabweichung der im Array enthaltenen Zahlen ist %.2f\n\n", stddev(data, SIZE));

	return 0;
}

