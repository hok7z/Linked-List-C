#include <stdio.h>
#include "list.h"

int main(void) {
    
    printf("List data type\n");

    list_t *list = newList();
    
    addElement(list,"Alisa");
    addElement(list,"Bob");
    addElement(list,"Julia");
    addElement(list,"Mycha");

    displayList(list);

    insertElement(list,"John",3);
    //deleteElement(list,3);
    displayList(list);
    
    destroyList(list);

    return 0;
}

