/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    
    // If first item, add to the head.
    if (head == NULL) {
        head = new_node;
    } else {
        Node *temp = head;
        // Traverse until the tail and add new node there.
        while (temp->next != NULL) temp = temp->next;
        temp->next = new_node;
    }
    
    return head;
}
