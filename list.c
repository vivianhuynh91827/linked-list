#include <stdlib.h>
#include <stdio.h>
#include "list.h"

void print_list(struct node * l){
  printf("[");
  struct node * current = l;
  while (current){
    printf("%d",current->i);
    current = current->next;
    if (current){
      printf(", ");
    }
  }
  printf("]\n");
}
struct node * insert_front(struct node * l, int n){
  struct node * new = malloc(sizeof(struct node));
  new->i = n;
  new->next = l;
  return new;
}
struct node * free_list(struct node * front){
  struct node * current= front;
  while (front){
    current = current-> next;
    free(front);
    front = current;
  }
  return front;
}
struct node * remove_node(struct node *front, int data){
  struct node * prev, * newFront, * next;
  struct node * current = front;
  while  (current && current->i != data){
    next = current-> next;
    prev = current;
    current = next;
  }
  if (!(current)){
    return front;
  }
  else{
    if (current == front){
      newFront = current->next;
      free(current);
      return newFront;
    }
    else if (current->next){
      prev->next = current-> next;
      free(current);
      return front;
    }
    else if (!(current->next)){
      free(current);
      prev->next = NULL;
      return front;
    }
  }
}
