#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H
typedef struct single_linked_list_node {
	struct single_linked_list_node *next;
	int                             value;
} *SingleLinkedListNode, *SingleLinkedList;

SingleLinkedList InitSingleLinkedList(void);
void             SingleLinkedListPush(SingleLinkedList *head, int value);
void             SingleLinkedListAdd(SingleLinkedList head, int value);
void SingleLinkedListInsert(SingleLinkedListNode prev_node, int value);
#endif