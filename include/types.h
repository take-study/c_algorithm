#ifndef __TYPES_H__
typedef struct link_table_node
{
    link_table_node *next;
    int value;
} LinkTableNode;

#endif