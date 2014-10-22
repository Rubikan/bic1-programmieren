/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    enum Phases {red, redyellow, green, green_blinking, yellow};
    enum Phases light_state = red;
    int sleep_red;
    int sleep_redyellow;
    int sleep_yellow;
    int sleep_green;
    int sleep_greenblinking;
    int cycle_count;
    int i;
    int j;
        
    printf("Wie lang soll die Rote Phase in Sekunden dauern? ");
    scanf("%d", &sleep_red);
    printf("Wie lang soll die Rot-Gelbe Phase in Sekunden dauern? ");
    scanf("%d", &sleep_redyellow);
    printf("Wie lang soll die Gruene Phase in Sekunden dauern? ");
    scanf("%d", &sleep_green);
    printf("Wie lang soll die Gruen-Blinkende Phase in Sekunden dauern? ");
    scanf("%d", &sleep_greenblinking);
    printf("Wie lang soll die Gelbe Phase in Sekunden dauern? ");
    scanf("%d", &sleep_yellow);
    printf("Wie oft soll der Zyklus wiederholt werden? ");
    scanf("%d", &cycle_count);
    
    for(i = 0; i < cycle_count; i++) {
        for(j = 0; j < 5; j++) {
            switch(light_state) {
                case red:
                    printf("ROT\n");
                    sleep(sleep_red);
                    break;
                case redyellow:
                    printf("ROT-GELB\n");
                    sleep(sleep_redyellow);
                    break;
                case yellow:
                    printf("GELB\n");
                    sleep(sleep_yellow);
                    break;
                case green:
                    printf("GRUEN\n");
                    sleep(sleep_green);
                    break;
                case green_blinking:
                    printf("GRUEN_BLINKEND\n");
                    sleep(sleep_greenblinking);
                    break;
                default:
                    printf("DEBUG\n");
                    break;
            }
            if(light_state == yellow)
                light_state = red;
            else
                light_state++;
        }
    }
    printf("GELB-BLINKEND\n");
    sleep(5);

	return 0;
}

