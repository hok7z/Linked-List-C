#include <stdio.h>
#include "list.h"

int main(void) { 
    list_t *list = newList();
    
    appendElement(list,"Alisa");
    appendElement(list,"Bob");
    appendElement(list,"Julia");
    appendElement(list,"Mycha");    
    displayList(list);

    destroyList(list);
    return 0;
}
