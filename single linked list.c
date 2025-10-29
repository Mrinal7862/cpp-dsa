// C program for all the operations in the
// Singly Linked List

#include <stdio.h>
#include <stdlib.h>

// Linked List Node

struct node
{
    int info;
    struct node *link;
};

struct node *start = NULL;

//Function to create list with the n nodes initially 

void createList(){
    if(start == NULL){
        int n; 
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);

        if(n!=0){
            int data; 

            struct node* newnode;
            struct node* temp;
            newnode = malloc(sizeof(struct node));

            newnode->link = NULL; 

            start = newnode; 

            temp = start;

            printf("\nEnter number to be interested: ");
            scanf("%d", &data);

            start->info = data; 

            for(int i = 2; i<=n; i++){
                newnode = malloc(sizeof(struct node));

                newnode->link = NULL; 
                temp->link = newnode; 

                printf("\nEnter number to be inserted: "); 
                scanf("%d", &data);

                newnode->info = data; 

                temp = temp->link;
            }
        }
        printf("\nThe lis is created\n");
    }
    else{
        printf("\nThe list is already created\n"); 
    }
}

// Function to traverse the linked list
void traverse(){
    struct node* temp; 
    
    // list is empty
    if(start == NULL){
        printf("\nList is empty\n");
    }
    // Else print the Linked List
    else{
        temp = start; 
        while (temp!=NULL){
            printf("Data = %d\n", temp->info);
            temp = temp->link; 
        }
        
    }
}

// Funciton to insert  at the front 

void insertAtFront(){
    int data; 
    struct node* temp; 
    temp = malloc(sizeof(struct node)); 
    printf("\nEnter number to be inserted: "); 
    scanf("%d", &data); 
    temp->info = data; 

    // Pointer of temp will be assigned to start 

    temp->link = start; 
    start = temp; 
}

// Function to insert at the end of the linked list 

void insertAtEnd(){
    int data; 
    struct node *temp, *head; 
    temp = malloc(sizeof(struct node));

    // Enter the number 
    printf("\nEnter number to be inserted: "); 
    scanf("%d", &data);

    // changeslinks
    temp->link = 0; 
    temp->info = data; 
    head = start; 
    
    while(head->link !=NULL){
        head = head->link;

    }
    head->link = temp;
}

// Function to insert at any specified position the linked list


int main()
{

    return 0;
}
