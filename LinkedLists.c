#include "LinkedLists.h"
#include <stdlib.h>

int_ll* create_int_linked_list(int first_value){
  int creation_status;
  int_ll* linked_list;
  linked_list = malloc(sizeof(int_ll));
  linked_list->list_size = 0;
  creation_status = insert_node_in_int_linked_list(first_value, linked_list);
  if(creation_status){
    return linked_list;
  }else{
    return NULL;
  }
}


int insert_node_in_int_linked_list(int new_value, int_ll* int_list){
  int_ll_node* current_node = int_list->first_node;
  int_ll_node* new_node;
  while (current_node->next_node != NULL) {
    if(current_node->value == new_value){
      return 0;
    }
    current_node = current_node->next_node;
  }
  new_node = malloc(sizeof(int_ll_node));
  current_node->next_node = new_node;
  new_node->value = new_value;
  new_node->next_node = NULL;
  int_list->list_size++;
  return 1;
}

int delete_node_of_int_linked_list(int to_delete_value, int_ll* int_list){
  int_ll_node* current_node = int_list->first_node;
  int_ll_node* to_delete_node = NULL;
  while (current_node->next_node != NULL) {
    if((current_node->next_node)->value == to_delete_value){
      to_delete_node = current_node->next_node;
      break;
    }
    current_node = current_node->next_node;
  }
  if(to_delete_node != NULL){
    current_node->next_node = to_delete_node->next_node;
    free(to_delete_node);
    int_list->list_size--;
    return 1;
  }else{
    return 0;
  }
}
