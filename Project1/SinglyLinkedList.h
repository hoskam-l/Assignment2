#ifndef SinglyLinkedList_h
#define SinglyLinkedList_h

struct listNode {
	int data;
	struct listNode* next;
};

int singlyListLength(struct listNode* head);
void insertInSinglyLinkedList(struct listNode** head, int data, int pos);
void deleteNodeFromLinkedList(struct listNode** head, int pos);
void printSLList(struct listNode* head);
struct listNode* CreateSinglyLinkedList();

#endif
