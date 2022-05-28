#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "student-list.h"
bool ListEmpty(student_list* pl)
{
    return (pl->pHead == NULL);
}
/////////////////////////////////////////////////////////////////////////
student* searchstud(int id,student_list* pl)
{
   student *temp =pl->pHead;//temp is a local variable
   while(temp != NULL && temp->ID != id)
   {
       temp = temp->pNext;
   }

  return temp ;
}
////////////////////////////////////////////////////////////////////////
void DELETE_STUDENT(student_list* pl,int id)
{
  if(ListEmpty(pl))//list is Empty
  {
      printf("List is Empty\n");
  }
  else //list is not empty
  {
     student* temp = searchstud(id,pl);//500
     if(temp == NULL)//node Not found
     {
       printf("Not Found\n");
     }
     else if(temp == pl->pHead && pl->pHead == pl->pTail)//it is the only node which is head and tail
     {
          free(temp);
          pl->pHead = NULL;
          pl->pTail = NULL;

     }
     else if(temp == pl->pHead)//delete head
     {
         pl->pHead->pNext->pPrev = NULL;
         pl->pHead = pl->pHead->pNext;
         free(temp);
     }
     else if(temp == pl->pTail)//delete tail
     {
       pl->pTail->pPrev->pNext = NULL;
       pl->pTail = pl->pTail->pPrev;
       free(temp);

     }
     else
     {
          temp->pNext->pPrev = temp->pPrev;
          temp->pPrev->pNext = temp->pNext;
          free(temp);
     }
     pl->size--;
#if(ENABLE_DEBUGGING == ENABLE)
        printf(" deleted \n");//temp->entry is a dangling ptr
#endif

  }//else

}
