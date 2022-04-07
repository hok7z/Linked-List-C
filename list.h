#ifndef LIST_H
#define LIST_H

#include <stdio.h>

typedef struct Node node_t;
typedef struct List list_t;

extern list_t *newList();
extern void destroyList(list_t *);

extern node_t *getElement(list_t *,size_t);
extern size_t getLenghtList(list_t*);

extern void appendElement(list_t *,char *);
extern void deleteElement(list_t *,size_t);
extern void insertElement(list_t *,char *,size_t);
extern void rewriteElement(list_t *,char *,size_t);
extern void displayList(list_t *);

// ToDo:
extern void sortList(list_t *);
extern void reverseList(list_t *);

#endif
