#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct Node {
    char *data;
    struct Node *next;
};

struct List {
    node_t *head;
};

static node_t *newNode(char *data) {
    node_t *Node = malloc(sizeof(node_t));
    
    if (!Node) 
        return NULL;
    
    Node->data = data;
    Node->next = NULL;

    return Node;
}

extern list_t *newList() {
    list_t *List = malloc(sizeof(list_t));
    
    if (!List)
        return NULL;

    List->head = NULL;
    return List;
}

extern node_t *getElement(list_t *list,size_t index) 
{
    node_t *current = list->head;
    for (int i = 0;i < index-1;i++)
        current = current->next;

    return current;
}

extern size_t getLenghtList(list_t *list) 
{
    size_t count = 0;
    node_t *current = list->head;
    
    while (current != NULL) {
        current = current->next;
        count++;
    }
    return count;
}

extern void appendElement(list_t *list,char *data) {
    node_t *current = NULL;

    if (list->head == NULL) 
        list->head = newNode(data);
    else {        
        current = list->head;
        while(current->next != NULL) 
            current = current->next;
        
        current->next = newNode(data);
    }
}

extern void deleteElement(list_t *list,size_t index) { 
    node_t *prev  = getElement(list,index-1);
    node_t *next_ = prev->next;
    
    if (prev == NULL || next_ == NULL)
        return;

    prev->next = next_->next;
}

extern void insertElement(list_t *list,char *data,size_t i) {   
    node_t *new = newNode(data);
    
    node_t *prev  = getElement(list,i-1); 
    node_t *next_ = prev->next;
    
    if (new == NULL || prev == NULL || next_->next == NULL)
        return;
    
    prev->next = new;
    new->next = next_->next;
}

extern void displayList(list_t *list) {    
    node_t *current = list->head;

    if (list->head == NULL)
        return;
    for (;current != NULL;current = current->next)
        printf("%s(%p) -> ",current->data,current);

    printf("*NULL\n");
}

extern void destroyList(list_t *list) { 
    node_t *current = list->head;
    node_t *next = current; 
    while(current != NULL) {    
        next = current->next;
        free(current),current = next;
    }
}
