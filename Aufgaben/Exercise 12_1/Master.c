/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 12_01 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdlib.h> /* random function */
#include <time.h> /* initialization of random function */
#include <stdio.h>
#include <malloc.h>
const int RANGE = 50; /* range of random numbers */
const int ELEMENTS = 10; /* initial elements in the tree */
typedef struct TNode { /* type definition of TNode */
	int data;
	struct TNode *pleft;
	struct TNode *pright;
} TNode;
TNode *insert(int new_element, TNode *tree, int *count);
TNode *search(int search_element, TNode *tree);
/* TNode **tree Hier wird folgende Variable definiert: Pointer, der auf eine
Pointervariable zeigt. Ein Stern steht dafür, dass es sich um eine Pointervariable
handelt, der zweite sagt aus, dass diese Pointervariable wieder auf eine
Pointervariable zeigt! */
void remove_node(int info, TNode **tree);
void preorder(TNode *tree);
void inorder(TNode *tree);
void postorder(TNode *tree);
void calculate_sum(TNode *tree, float *sum);
void get_smallest_element(TNode *tree, int *smallest);
void get_biggest_element(TNode *tree, int *biggest);
TNode *minimum(TNode **tree);

int main(int argc, char* argv[]) {
	TNode *proot = NULL;
	int help = 0;
	int i = 0;
	int element_count = 0;
	int *pelement_count = &element_count;
	int smallest_element = -1;
	int *psmallest_element = &smallest_element;
	int biggest_element = -1;
	int *pbiggest_element = &biggest_element;
	float sum = 0;
	float *psum = &sum;
	srand((unsigned)time(NULL)); /* random seed */
	/* generates a tree – im Sourcecode gibt es auch die Zahlenfolge, die den Baum in Abb.
	12 einträgt */
	for (i = 0; i < ELEMENTS; i++) {
		help = rand() % RANGE;
		proot = insert(help, proot, pelement_count);
	}
	/* prints the tree */
	inorder(proot); printf("\n");
	/* prints the smallest element */
	get_smallest_element(proot, psmallest_element);
	printf("Smallest = %d\n", smallest_element);
	/* prints the biggest element */
	get_biggest_element(proot, pbiggest_element);
	printf("Biggest = %d\n", biggest_element);
	/* prints the average of the tree */
	calculate_sum(proot, psum);
	printf("Average: %.2lf\n", sum/element_count);
	/* delete elements */
	for (i = 0; i < ELEMENTS; i++) {
		help = rand() % RANGE;
		printf("L1: %d\n", help);
		remove_node(help, &proot);
	}
	return 0;
}

TNode *insert(int new_element, TNode *tree, int *count) {
	if (tree == NULL) /* new place is found! */ {
		tree = (TNode *)malloc(sizeof(TNode));
		tree->pleft = NULL; /* initialization of the variables */
		tree->pright = NULL;
		tree->data = new_element;
		*count += 1;
	} else {
		if (search(new_element, tree) != NULL) {
			printf("Element already exists, skipping insertion of %d\n", new_element);
		} else if (new_element < tree->data) {
			tree->pleft = insert(new_element, tree->pleft, count);
		} else {
			tree->pright = insert(new_element, tree->pright, count);
		}
	}
	return tree;
}

TNode *search(int search_element, TNode *tree) {
	if (tree != NULL) {
		if (tree->data == search_element) {
			return tree;
		}
		else {
			if (search_element < tree->data) /* search */
			{
				return search(search_element, tree->pleft);
			}
			else
			{
				return search(search_element, tree->pright);
			}
		}
	}
	return NULL; /* search_element not in the tree */
}

void preorder(TNode *tree) { /* prints the tree */
	if (tree != NULL) {
		printf("-%d", tree->data);
		preorder(tree->pleft);
		preorder(tree->pright);
	}
}

void inorder(TNode *tree) { /* prints the tree */
	if (tree != NULL) {
		printf("(");
		inorder(tree->pleft);
		printf(" %d ", tree->data);
		inorder(tree->pright);
		printf(")");
	}
	else {
		printf("*");
	}
}

void postorder(TNode *tree) {
	if (tree != NULL) {
		postorder(tree->pleft);
		postorder(tree->pright);
		printf("-%d", tree->data);
	}
}

void calculate_sum(TNode *tree, float *sum) {
	if (tree != NULL) {
		*sum += tree->data;
		calculate_sum(tree->pleft, sum);
		calculate_sum(tree->pright, sum);
	}
}

void get_smallest_element(TNode *tree, int *smallest) {
	if (tree != NULL) {
		if (*smallest == -1 || *smallest > tree->data)
			*smallest = tree->data;
		get_smallest_element(tree->pleft, smallest);
		get_smallest_element(tree->pright, smallest);
	}
}

void get_biggest_element(TNode *tree, int *biggest) {
	if (tree != NULL) {
		if (*biggest == -1 || *biggest < tree->data)
			*biggest = tree->data;
		get_biggest_element(tree->pleft, biggest);
		get_biggest_element(tree->pright, biggest);
	}
}
/* Unlinks and returns minimum element. */
TNode *minimum(TNode **tree) {
	TNode *p = *tree; /* convenience */
	if (!p) return NULL; /* terminate recursion */
	if (p->pleft) {
		/* there's still a smaller element ... */
		return minimum(&(p->pleft));
	}
	else {
		/* minimum element found -> unlink and return */
		*tree = p->pright;
		return p;
	}
}

void remove_node(int info, TNode **tree) {
	TNode * p = *tree; /* convenience */
	if (!p) return; /* terminate recursion */
	if (p->data == info) {
		/* element found */
		if (!p->pleft) {
			/* no left successor -> replace with right successor */
			*tree = p->pright;
		} else {
			if (!p->pright) {
				/* no right successor -> replace with left successor */
				*tree = p->pleft;
			} else {
				/* both left and right successor
				-> replace with minimum element of right subtree */
				*tree = minimum(&(p->pright));
				(*tree)->pleft = p->pleft;
				(*tree)->pright = p->pright;
			}
		}
		free(p); /* clean up */
	} else {
		/* wrong element -> proceed to appropriate subtree */
		if (info < p->data) remove_node(info, &(p->pleft));
		else remove_node(info, &(p->pright));
	}
}