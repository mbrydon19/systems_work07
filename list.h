
void print_list(struct node *next_node) {
  printf( "Linked list: ");
  struct node *cur_node = next_node;
  while( cur_node) {
    printf( "%s -> ", cur_node->string);
    cur_node = cur_node->next;
  }
  printf( "no next\n");
}

struct node * insert_front(struct node * prev_front, char element[25]) {
  struct node *new_node = malloc( sizeof( struct node));
  strcpy( new_node->string, element);
  new_node->next = prev_front;
  return new_node;
}

struct node * free_list(struct node * cur_node) {
  while( cur_node) {
    struct node *next_node = cur_node->next;
    free( cur_node);
    cur_node = next_node;
  }
  return cur_node;
}
