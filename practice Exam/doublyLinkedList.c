#include<stdio.h>
#include<stdlib.h>
 
 struct node
 {
    int data ;
    struct node * next;
    struct node * prev;

 };
   void linkedlistTraversal( struct node * ptr){
   while(ptr!=NULL)
   {
    printf("Element : %d \n" , ptr ->data);
    ptr = ptr->prev;
   }

   }

   int main()
   {
   struct node *head ;
   struct node *second ;
   struct node * third;


   head = ( struct node *)malloc(sizeof(struct node));
   second = ( struct node *)malloc(sizeof(struct node));
   third = ( struct node *)malloc(sizeof(struct node));


   head->data = 10;
   head->next = second;
   head->prev = NULL;

   second ->data = 20; 
   second ->next = third;
   second ->prev = head;


   third -> data = 80;
   third ->next = NULL;
   third -> prev = second;

//    linkedlistTraversal( head);
   linkedlistTraversal( third);

    
   }
 