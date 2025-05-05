#ifndef bst_h
#define bst_h

typedef struct tree_node {
    int value;
    struct tree_node *left;
    struct tree_node *right;
} int_node;

int_node* search_in_int_bst(int value, int_node *sub_tree_root);

void create_int_bst_node(int new_value, int_node** new_node);
int insert_node_in_int_bst(int value, int_node **sub_tree_root);
void delete_int_bst_node(int_node **to_delete_node);
int delete_node_in_int_bst(int new_value, int_node **sub_tree_root);
void print_tree_in_ascending_order(int_node *sub_tree_root);

#endif
