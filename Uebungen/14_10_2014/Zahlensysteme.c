/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS

/* Programmcode hier einfügen */
#include <stdio.h>

int main(int argc, char* argv[]) {
    int zahl_alt = 0;
    int zahl_neu = 0;
    int index = 0;
    int basis = 0;
    int stop = 0;
    int ergebnis[100];
    
    printf("Bitte geben sie eine Zahl ein: \n");
    scanf("%d", &zahl_alt);
    printf("Bitte geben Sie eine Basis fuer die Umwandlung ein: \n");
    scanf("%d", &basis);
    
    if(basis != 2 && basis != 8 && basis != 16) {
        printf("Es werden nur das Binaere, Oktale und Hexadezimale System unterstuetzt!\n");
        return 0;
    }
    while(!stop) {
        zahl_neu = zahl_alt / basis;
        ergebnis[index] = zahl_alt % basis;
        zahl_alt = zahl_neu;
        if(zahl_neu == 0) {
            stop = 1;
        } else {
            index++;
        }
    }
    for(; index >= 0; index--) {
        if(ergebnis[index] <= 9) {
            printf("%d", ergebnis[index]);
        } else {
            switch(ergebnis[index]) {
                case 10:
                    printf("A");
                    break;
                case 11:
                    printf("B");
                    break;
                case 12:
                    printf("C");
                    break;
                case 13:
                    printf("D");
                    break;
                case 14:
                    printf("E");
                    break;
                case 15:
                    printf("F");
                    break;
            }
        }
    }
    printf("\n");

	return 0;
}