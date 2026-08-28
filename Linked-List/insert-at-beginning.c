// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node * link;
};

struct node * add_at_end(struct node * ptr , int data){

    struct node * temp = malloc (sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while(ptr->link !=NULL){
        ptr= ptr ->link;
    }
    ptr->link = temp;
    return temp;
};

struct node * add_beg(struct node * ptr, int data){
    struct node * temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = ptr;

    ptr=temp;

    return temp;
    return ptr;
};



int main() {
    struct node * head= NULL;
    head = (struct node *)malloc (sizeof (struct node));
    head->data = 10;
    head->link = NULL;

    struct node * current = malloc (sizeof(struct node));
    current = head;
    current= add_at_end(current, 20);
    current= add_at_end(current, 30 );
    current= add_at_end(current, 40);

    head = add_beg(head, 05);

    current=head;
    while(current!=NULL){
        printf("%d \n",current->data);
        current=current->link;
    }

    return 0;
}
