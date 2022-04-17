# Linked list in C

Is an implementation of a linked list in C.

```c
#include <stdio.h>
#include "list.h"

int main (void)
{ 
    list_t *list = newList();
    
    appendElement(list,"Alisa");
    appendElement(list,"Bob");
    appendElement(list,"Julia");
    appendElement(list,"Mycha");
    displayList(list);
 
    destroyList(list);

    return 0;
}
```

## API

### list_t *newList() 
Create new list.This function returns a pointer to the list.

### list_t *destroyList(list_t *list) 
Free used memory `list`.

### node_t *getElement(list_t *list,size_t index) 
Get element at `index` into `list`.

### size_t getLenghtList(list_t *list)
Return number of items in `list`. 

### void appendElement(list_t *list,char *data)  
Add new `data` into end `list`.

### void deleteElement(list_t *list,size_t index) 
Delete item at `index` in `list`.

### void insertElement(list_t *list,char *data,size_t index)  
Insert `data` at `index` in `list`.

### list_t *rangeElements(list_t *list,size_t start,size_t end)
Range items in `list` from start to end

### void rewriteElement(list_t *list,char *data,size_t index ) 
Rewrite `data` at `index` in `list`. 

### void displayList(list_t *list)  
Display items into `list`
