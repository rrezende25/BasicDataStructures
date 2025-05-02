#ifndef linkedlist_h
#define linkedlist_h

typedef struct int_linked_list_node{
  int value;
  struct int_linked_list_node *next_node;
} int_ll_node;

typedef struct int_linked_list{
  int list_size;
  struct int_linked_list_node *first_node;
} int_ll;


int_ll* create_int_linked_list(int first_value);
int insert_node_in_int_linked_list(int new_value, int_ll* int_list);
int delete_node_of_int_linked_list(int to_delete_value, int_ll* int_list);

#endif
