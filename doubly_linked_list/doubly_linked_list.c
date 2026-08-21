#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

struct Node_int {
  struct Node_int* previous;
  struct Node_int* next;
  int data; 
};

void cat_Node_int(struct Node_int* a, struct Node_int* b) {
  a->next = b;
  b->previous = a;
}



typedef struct Node {
  struct Node *previous;
  struct Node *next;
  int data;
} Node;

Node *node_create(int data) {
  Node *node = malloc(sizeof(*node));
  memset(node, 0, sizeof(*node));
  node->data = data;
  return node;
}

void append_Node(Node* a, Node* b) {
  a->next = b;
  b->previous = a;
}


int main(){

  struct Node_int head;
  head.data = 4;
  
  struct Node_int second_element;
  second_element.data = 7;


  cat_Node_int(&head, &second_element);


  printf("%d\n", head.next->data);

  Node head2 = *node_create(4);
  Node second_node = *node_create(7);

  append_Node(&head2, &second_node);

  printf("%d", head.next->data);

  return 0;
}
