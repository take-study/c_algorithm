#include "linked_list.h"
#include <stddef.h>
#include <stdlib.h>
/*************single linked list***************/
/**
 * @brief create a new single linked list node
 *
 * @return SingleLinkedListNode a new single linked list
 */
static SingleLinkedListNode
NewSingleLinkedListNode()
{
	SingleLinkedListNode node =
	    (SingleLinkedListNode)malloc(sizeof(SingleLinkedListNode));
	node->next  = NULL;
	node->value = 0;
	return node;
}

/**
 * @brief init a single linked list
 *
 * @return SingleLinkedList the head node of the list
 */
SingleLinkedList
InitSingleLinkedList(void)
{
	SingleLinkedListNode head = NewSingleLinkedListNode();
	return head;
}

/**
 * @brief insert a new node at the start of the single linked list
 *
 * @param head the head node of the linked list
 * @param value the value of the new node
 */
void
SingleLinkedListPush(SingleLinkedList *head, int value)
{
	SingleLinkedListNode node = NewSingleLinkedListNode();
	node->value               = value;
	node->next                = *head;
	*head                     = node;
}

/**
 * @brief insert a new node at the end of the single linked list
 *
 * @param head the head node of the linked list
 * @param value the value of the new node
 */
void
SingleLinkedListAdd(SingleLinkedList head, int value)
{
	SingleLinkedListNode node = NewSingleLinkedListNode();
	node->value               = value;
	while (head->next != NULL) {
		head = head->next;
	}
	head->next = node;
}

/**
 * @brief insert a new node after the pre_node
 *
 * @param prev_node where the new node insert after
 * @param value  the value of new node
 */
void
SingleLinkedListInsert(SingleLinkedListNode prev_node, int value)
{
	SingleLinkedListNode node = NewSingleLinkedListNode();
	node->value               = value;
	node->next                = prev_node->next;
	prev_node->next           = node;
}
