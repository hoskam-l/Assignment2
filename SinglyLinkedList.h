#ifndef SinglyLinkedList_h
#define SinglyLinkedList_h

typedef struct listNode {
	int data;
	struct listNode* next;
}myNode, *myNodePtr;



int singlyListLength(myNodePtr head);
void insertInSinglyLinkedList(struct listNode** head, int data, int pos);
void deleteNodeFromLinkedList(struct listNode** head, int pos);
void printSLList(struct listNode* head);
struct listNode* CreateSinglyLinkedList();

#endif
