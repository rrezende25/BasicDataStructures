#include <stdio.h>
#include "bst.h"


int main(void){ 
    int insert_status, delete_status;
    int_node *main_root = NULL;
    int_node *search_test;
    insert_status = insert_node_in_int_bst(100, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(150, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(125, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(175, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(120, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(140, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(160, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(190, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(119, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(124, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(130, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(145, &main_root);
    printf("%i", insert_status);
    insert_status = insert_node_in_int_bst(145, &main_root);
    printf("%i", insert_status);
    printf("\n");
    search_test = search_in_int_bst(145, main_root);
    if(search_test != NULL){
        printf("achou %i\n", search_test->value);
    }
    search_test = search_in_int_bst(118, main_root);
    if(search_test != NULL){
        printf("achou %i\n", search_test->value);
    }else{
        printf("num achou 118 o q n tem\n");
    }
    print_tree_in_ascending_order(main_root);
    printf("\n");
    delete_status = delete_node_in_int_bst(100, &main_root);
    printf("%i", delete_status);
    printf("\n");
    print_tree_in_ascending_order(main_root);
    delete_status = delete_node_in_int_bst(125, &main_root);
    printf("%i", delete_status);
    printf("\n");
    print_tree_in_ascending_order(main_root);
    delete_status = delete_node_in_int_bst(190, &main_root);
    printf("%i", delete_status);
    printf("\n");
    print_tree_in_ascending_order(main_root);
    delete_status = delete_node_in_int_bst(145, &main_root);
    printf("%i", delete_status);
    printf("\n");
    print_tree_in_ascending_order(main_root);
    return 0;
}
