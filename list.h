struct node { int i; struct node *next;};
void print_list(struct node * l);
struct node * insert_front(struct node * l, int n);
struct node * free_list(struct node * l);
struct node * remove_node(struct node *front, int data);
