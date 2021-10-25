#include <stdio.h>
#include <stdlib.h>
#include "SinglyLinkedList.h"

int main() {
	struct listNode* sll = CreateSinglyLinkedList(1);
	//struct listNode* head = NULL;
	insertInSinglyLinkedList(&sll, 5, 5);
	insertInSinglyLinkedList(&sll, 2, 5);
	printf("Elements in List:%d\n", singlyListLength(sll));
	printSLList(sll);
	deleteNodeFromLinkedList(&sll, 2);
	printSLList(sll);
	return 0;
}