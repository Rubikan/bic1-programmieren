/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS

/* Programmcode hier einfügen */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/* Deklaration der Funktionsprototypen */
int contains(int arr[], int value);

int main(int argc, char* argv[]) {
    int zahl = 0;
    int zahl_neu = 0;
    int accepted = 0;
    int erste_stelle = 0;
    int letzte_stelle = 0;
    int mittlere_stelle = 0;
    
    while(!accepted) {
        printf("Bitte geben Sie eine 3 stellige Zahl an: \n");
        scanf("%d", &zahl);
        if (zahl < 100 || zahl > 999) {
            printf("Diese Zahl ist nicht 3 stellig!\n");
            continue;
        }
        erste_stelle = zahl / 100;
        letzte_stelle = zahl % 10;
        if (erste_stelle == letzte_stelle) {
            printf("Die erste und letzte Stelle duerfen nicht gleich sein!\n");
            continue;
        }
        mittlere_stelle = zahl - ((erste_stelle*100)+letzte_stelle);
        accepted = 1;
    }
    zahl_neu = (letzte_stelle*100) + mittlere_stelle + erste_stelle;
    
    if (zahl > zahl_neu)
        zahl = zahl - zahl_neu;
    else
        zahl = zahl_neu - zahl;
    
    erste_stelle = zahl / 100;
    letzte_stelle = zahl % 10;
    mittlere_stelle = zahl - ((erste_stelle*100)+letzte_stelle);
    
    zahl_neu = (letzte_stelle*100) + mittlere_stelle + erste_stelle;
    
    printf("Das Ergebnis ist: %d\n", zahl+zahl_neu);
    
    return 0;
}