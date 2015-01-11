/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 12_02 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Funktionsprototypen */
int fibonacci(int n);

int main(int argc, char* argv[]) {
	int fib = 0;
	int i;

	printf("Bis zur wievielte Stelle wollen sie die Fibonacci Folge berechnen?\n");
	scanf("%d", &fib);
	printf("Fibonacci Folge bis zur %dten Stelle:\n", fib);

	for (i = 1; i <= fib; i++) {
		printf("%d\n", fibonacci(i));
	}
}

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}