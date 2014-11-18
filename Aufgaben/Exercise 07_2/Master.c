/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 07_2 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>

/* Funktionsprototypen */
void reverse(char string[]);
int get_length(char string[]);

int main(int argc, char* argv[]) {
	char string[] = "thisisatest";

	printf("%s\n", string);
	reverse(string);
	printf("%s\n", string);

	return 0;
}

void reverse(char string[]) {
	char temp;
	int i = 0;
	int j = get_length(string) - 1;

	for (i; i <= j; i++, j--) {
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}
}

int get_length(char string[]) {
	int found = 0;
	int length = 0;

	while (!found) {
		if(string[length] == '\0') {
			found = 1;
		} else {
			length++;
		}
	}
	return length;
}