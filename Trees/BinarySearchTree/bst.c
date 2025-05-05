#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int_node* search_in_int_bst(int value, int_node *sub_tree_root){
    if(value < sub_tree_root->value && sub_tree_root->left != NULL){
        return search_in_int_bst(value, sub_tree_root->left);
    }else if(value > sub_tree_root->value && sub_tree_root->right != NULL){
         return search_in_int_bst(value, sub_tree_root->right);
    }else if(value == sub_tree_root->value){
        return sub_tree_root;
    }else{
        return NULL;
    }
}

void create_int_bst_node(int new_value, int_node **new_node){
    *new_node = malloc(sizeof(int_node));
    (*new_node)->value = new_value;
    (*new_node)->left = NULL;
    (*new_node)->right = NULL;
}

int insert_node_in_int_bst(int new_value, int_node **sub_tree_root){
    if(*sub_tree_root == NULL){
        create_int_bst_node(new_value, sub_tree_root);
        return 0;
    }
    if(new_value < (*sub_tree_root)->value){
        return insert_node_in_int_bst(new_value, &((*sub_tree_root)->left));
    }
    if(new_value > (*sub_tree_root)->value){
        return insert_node_in_int_bst(new_value, &((*sub_tree_root)->right));
    }
    return -1;
    
}

void delete_int_bst_node(int_node **to_delete_node){
    int_node *right_node, *left_node, *to_insert_right_node;
    left_node = (*to_delete_node)->left;
    right_node = (*to_delete_node)->right;
    if(left_node == NULL && right_node == NULL){
        free(*to_delete_node);
        *to_delete_node = NULL;
        return;
    }
    if(left_node == NULL){
        free(*to_delete_node);
        *to_delete_node = right_node;
        return; 
    }
    if(right_node == NULL){
        free(*to_delete_node);
        *to_delete_node = left_node;
        return; 
    }

    free(*to_delete_node);
    *to_delete_node = left_node;
    to_insert_right_node = left_node;
    while (to_insert_right_node->right != NULL) {
        to_insert_right_node = to_insert_right_node->right; 
    }
    to_insert_right_node->right = right_node;
}

int delete_node_in_int_bst(int to_delete_value, int_node **sub_tree_root){
    if(to_delete_value < (*sub_tree_root)->value){
        return delete_node_in_int_bst(to_delete_value, &((*sub_tree_root)->left));
    }
    if(to_delete_value > (*sub_tree_root)->value){
        return delete_node_in_int_bst(to_delete_value, &((*sub_tree_root)->right));
    }
    if(to_delete_value == (*sub_tree_root)->value){
        delete_int_bst_node(sub_tree_root);
        return 0;
    }
    return -1;
}

void print_tree_in_ascending_order(int_node *sub_tree_root){
    if(sub_tree_root->left != NULL){
        print_tree_in_ascending_order(sub_tree_root->left);
    }
    printf("%i ,", sub_tree_root->value);
    if(sub_tree_root->right != NULL){
        print_tree_in_ascending_order(sub_tree_root->right);
    }
}
