/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 11_02 */

#ifndef STACK_H
#define STACK_H
#include <stdlib.h>

typedef struct Stack {
    int count;
    int capacity;
    int *data;
} Stack;

Stack create_stack(int initialcapacity);
void push(int value, Stack *stack);
int pop(Stack *stack);

#endif