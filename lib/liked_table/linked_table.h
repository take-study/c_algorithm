#ifndef __LINKED_TABLE_H
#define __LINKED_TABLE_H
typedef struct single_linked_table_node {
	struct single_linked_list_node *next;
	int                             value;
} SingleLinkedTableNode, *SingleLinkedTable;

SingleLinkedTable InitSingleLinkedTable(void);
#endif