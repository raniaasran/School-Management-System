#include <stdio.h>
#include <stdlib.h>
#include "student-list.h"
void createList(student_list * pl)
{
    pl->pHead = NULL;
    pl->pTail = NULL;
    pl->idf=200;
    pl->idl=200;
    pl->size = 0;
}
