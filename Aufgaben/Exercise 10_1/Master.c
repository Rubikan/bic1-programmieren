/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* Personenkennzahl */
/* 10_1 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfuegen */
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 20

int main(int argc, char* argv[]) {
    int sum = 0;
    int num;
    int i;
    
    if (argc != 2) {
        printf("FEHLER\n");
        return 1;
    }
    num = atoi(argv[1]);
    for (i = 1; i <= num; i++) {
        sum += i;
    }
    printf("Die Summe der Zahlen von 1 bis %d ist %d.\n", num, sum);
    
    return 0;
}