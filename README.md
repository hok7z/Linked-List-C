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

    rewriteElement(list,"John",3);
    displayList(list);
    
    destroyList(list);

    return 0;
}
```

## API

### list_t *newList() 
Create new list.This function returns a pointer to the list.

### list_t *destroyList(list_t *list) 
Free used memory `list`

### node_t *getElement(list_t *list,size_t index) 
Get element index `index` into `list`.

### getLenghtList(list_t *list)
Return number of items in `list`. 

### appendElement(list_t *list,char *data)  
Add new `data` into end `list`

### deleteElement(list_t *list,size_t index) 
Delete item at `index` in `list`

### insertElement(list_t *list,char *data,size_t index)  
Insert `data` into `list` at `index`

### rewriteElement(list_t *list,char *data,size_t index ) 
Rewrite `data` at `index` in list 

### displayList(list_t *list)  
Display items into `list`
