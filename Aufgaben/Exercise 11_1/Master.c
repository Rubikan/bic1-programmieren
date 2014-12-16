/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Andreas Rubik */
/* 1410258038 */
/* 11_01 */

#include <stdio.h>
#include <stdlib.h>

int *allocate_int_array(int length);
void fill_with_fibonacci_sequence(int *data, int length);

int main(int argc, char* argv[]) {
	int i = 0, n = 0;
	int *data = NULL;

	printf("n = ");
	scanf("%d", &n);

	data = allocate_int_array(n);
	fill_with_fibonacci_sequence(data, n);

	printf("Die ersten %d Fibonacci-Zahlen:\n", n);
	for (i = 0; i < n; i++)
	{
		printf("F_%d = %d\n", i + 1, data[i]);
	}
    
    free(data);
	return 0;
}

int *allocate_int_array(int length) {
    int *pointer;
    
	if (length < 0)
        return NULL;
    pointer = (int *) malloc(length * sizeof(int));
    return pointer;
}

void fill_with_fibonacci_sequence(int *data, int length) {
    int i;
    data[0] = 1;
    data[1] = 1;
    
    for(i = 2; i  <= length; i++) {
        data[i] = data[i-1] + data[i-2];
    }
}
