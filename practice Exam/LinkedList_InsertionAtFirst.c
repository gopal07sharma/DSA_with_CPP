#include<stdio.h>
#include<stdlib.h>
 
 struct node
 {
    int data ;
    struct node * next;
 };
   void linkedlistTraversal( struct node * ptr){
   while(ptr!=NULL)
   {
    printf("Element : %d \n" , ptr ->data);
    ptr = ptr->next;
   }

   }

//    struct node * InsertAtFirst( struct node * head , int data ){
//        struct node * ptr = ( struct node *)malloc(sizeof(struct node));
//        ptr -> next = head;
//        ptr ->data = data ;
//        return ptr;
//    }

  struct node * insertAtIndex( struct node * head , int data , int index){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    // while(ptr!=index-1)

  }

   int main()   
   {
   struct node *head ;
   struct node *second ;
   struct node *third ;
//    struct node * third;


   head = ( struct node *)malloc(sizeof(struct node));
   second = ( struct node *)malloc(sizeof(struct node));
   third = ( struct node *)malloc(sizeof(struct node));


   head->data = 10;
   head->next = second;

   second ->data = 20; 
   second ->next = third;

   third ->data =30 ; 
   third ->next = NULL;

   linkedlistTraversal( head);
   printf("\n");
    // head =  InsertAtFirst(head , 56);

    insertAtIndex( head , 56 , 1);
    linkedlistTraversal( head);
    

    
   }
 