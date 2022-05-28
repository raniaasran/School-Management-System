#include <stdio.h>
#include <stdlib.h>
#include "student-list.h"
void STUDENT_SCORE(student_list* pl)
{
  if(ListEmpty(pl))//list is Empty
  {
      printf("List is Empty\n");
  }
  else //list is not Empty
  {  float SC;
           student *temp =pl->pHead;//temp is a local varaible
           while(temp != NULL )
           {   printf("\n===================================\n");
               printf("please enter the score for the student %s? \n",temp->name);
               fflush(stdin);
               scanf("%f",&SC);
               printf("\n===================================\n");
               temp->score=SC;
               temp = temp->pNext;
           }

  }
#if(ENABLE_DEBUGGING == ENABLE)
        printf(" The score is updated \n");//temp->entry is a dangling ptr
#endif
}
