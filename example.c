#include <stdio.h>
#include "list.h"

int main(void) { 
    list_t *list = newList();
    
    appendElement(list,"Alisa");
    appendElement(list,"Bob");
    displayList(list);

    destroyList(list);
    return 0;
}
