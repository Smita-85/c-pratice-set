#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};

int calcSize (struct Node *head);

void deleteBegin(struct Node **head)
{

  struct Node *tempNode = *head;
  if (*head == NULL)
    {
      printf ("Linked List Empty, nothing to delete");
      return;
    }
  if (tempNode->next == *head)
    {
      *head = NULL;
      return;
    }

  struct Node *curr = *head;
  while (curr->next != *head)
    curr = curr->next;
  curr->next = (*head)->next;
  *head = (*head)->next;
  free (tempNode);
}

void deleteEnd (struct Node **head)
{
  struct Node *tempNode = *head;
  struct Node *previous;
  if (*head == NULL)
    {
      printf ("Linked List Empty, nothing to delete");
      return;
    }
  if (tempNode->next == *head)
    {
      *head = NULL;
      return;
    }
  while (tempNode->next != *head)
    {
      previous = tempNode;
      tempNode = tempNode->next;
    }
  previous->next = *head;
  free (tempNode);
}

void deletePos (struct Node **head, int n)
{

  int size = calcSize (*head);

  if (n < 1 || size < n)
    {
      printf ("Can't delete, %d is not a valid position\n", n);
    }

  else if (n == 1)
    deleteBegin(head);

  else if (n == size)
    deleteEnd (head);

  else
    {
      struct Node *tempNode = *head;
      struct Node *previous; 
      while (--n)
	{ 
	  previous = tempNode;
	  tempNode = tempNode->next;
	}
      previous->next = tempNode->next;
      free (tempNode);
    }
}

void insert (struct Node **head, int data)
{
  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
  newNode->data = data;

  if (*head == NULL)
    {
      *head = newNode;
      (*head)->next = *head;
      return;
    }

  struct Node *curr = *head;

  while (curr->next != *head)
    {
      curr = curr->next;
    }

  curr->next = newNode;
  newNode->next = *head;
  *head = newNode;
}

int calcSize (struct Node *head)
{
  int size = 0;
  struct Node *temp = head;

  if (temp == NULL)
    return size;

  do
    {
      size++;
      temp = temp->next;

    }
    while (temp != head);

  return size;
}

void display (struct Node *head)
{
  if (head == NULL)
    return;

  struct Node *temp = head;
  do
    {
      printf ("%d ", temp->data);
      temp = temp->next;

    }
  while (temp != head);
  printf ("\n");
}

int main ()
{    
  struct Node *head = NULL;

  insert (&head, 10);
  insert (&head, 11);
  insert (&head, 12);
  insert (&head, 13);
  insert (&head, 14);
  insert (&head, 15);
  insert (&head, 16);

  display (head);

  deleteBegin(&head);
  display (head);

  deleteEnd (&head);
  display (head);

  deletePos (&head, 3);
  display (head);

  return 0;
}
