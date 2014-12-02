/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Andreas Rubik */
/* 1410258038 */
/* 09_1 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arraystats.h"
#include "helpers.h"

double average(int data[], int length) {
	double average = 0;

	average = (1.0 / length) * sum(data, length);

	return average;
}

double median(int data[], int length) {
	int index;
	double median;

	bubblesort(data, length);
	if (length % 2 == 0) {
		index = (length / 2) - 1;
		median = data[index];
	}
	else {
		index = (length + 1 / 2) - 1;
		median = data[index];
	}

	return median;
}

int minimum(int data[], int length) {
	int min = data[0];
	int i;

	for (i = 1; i < length; i++) {
		if (data[i] < min)
			min = data[i];
	}

	return min;
}

int maximum(int data[], int length) {
	int max = 0;
	int i = 0;

	for (i = 0; i < length; i++) {
		if (data[i] > max || i == 0)
			max = data[i];
	}

	return max;
}

int sum(int data[], int length) {
	int sum = 0;
	int i = 0;

	for (i = 0; i < length; i++) {
		sum += data[i];
	}

	return sum;
}

double variance(int data[], int length) {
	double middle = sum(data, length) / length;
	double sum = 0.0;
	int i = 0;

	for (i = 0; i < length; i++) {
		sum += pow(data[i] - middle, 2.0);
	}

	return (1.0 / length) * sum;
}

double stddev(int data[], int length) {
	double var = variance(data, length);
	double stddev = sqrt(var);

	return stddev;
}

void print_array(int data[], int length) {
	int i = 0;

	for (i = 0; i < length; i++) {
		printf("%d ", data[i]);
	}
	printf("\n\n");
}