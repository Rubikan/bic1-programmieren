/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 11_02 */

typedef struct Stack {
    int count;
    int capacity;
    int *data;
} Stack;

Stack create_stack(int initialcapacity) {
    Stack stack;
    stack.count = 0;
    stack.capacity = initialcapacity;
    stack.data = (int *) malloc(initialcapacity * sizeof(int));
    return stack;
}

void push(int value, Stack *stack) {
	if (stack->count == stack->capacity) {
		stack->data = (int *) realloc(stack->data, 2 * stack->capacity * sizeof(int));
    }
	stack->data[stack->count] = value;
	stack->count++;
}

int pop(Stack *stack) {
	return stack->data[--stack->count];
}