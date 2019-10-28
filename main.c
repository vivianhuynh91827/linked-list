#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main(){
  struct node * list = NULL;
  printf("Printing out empty list:\n");
  print_list(list);
  printf("Adding 0-9 to the list:\n");
  int x;
  for (x = 0; x< 10; x ++){
    list = insert_front(list, x);
    print_list(list);
  }
  printf("Removing 9 from the list:\n");
  list = remove_node(list,9);
  print_list(list);
  printf("Removing 3 from the list:\n");
  list = remove_node(list,3);
  print_list(list);
  printf("Removing 0 from the list:\n");
  list = remove_node(list,0);
  print_list(list);
  printf("Removing -100 from the list:\n");
  list = remove_node(list,-100);
  print_list(list);
  printf("Freeing list:\n");
  list = free_list(list);
  print_list(list);
  return 0;
}
