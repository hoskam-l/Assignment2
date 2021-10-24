#include <stdio.h>
#include <stdlib.h>
#include "SinglyLinkedList.h"

int main() {
	struct listNode* sll = CreateSinglyLinkedList();
	//struct listNode* head = NULL;
	insertInSinglyLinkedList(&sll, 5, 1);
	insertInSinglyLinkedList(&sll, 2, 2);
	insertInSinglyLinkedList(&sll, 3, 4);
	insertInSinglyLinkedList(&sll, 10, 1);
	printf("Elements in List:%d\n", singlyListLength(sll));
	printSLList(sll);
	deleteNodeFromLinkedList(&sll, 3);
	printSLList(sll);
	return 0;
}