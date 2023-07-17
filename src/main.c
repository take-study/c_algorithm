#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
int
main(void)
{
	SingleLinkedList head = InitSingleLinkedList();
	head->value           = 1;
	SingleLinkedListAdd(head, 3);
	SingleLinkedListInsert(head->next, 4);
	SingleLinkedListPush(&head, 2);
	while (head != NULL) {
		printf("%p-%d\n", head, head->value);
		head = head->next;
	}

	return 0;
}