#include <stdio.h>
#include <stdlib.h>
#include "student-list.h"

void RANK_STUDENT(student_list* pl ,student_list*spl)
{

  if(ListEmpty(pl))//list is Empty
   {
      printf("List is Empty\n");
   }
  else //list is not Empty
   {
      student *temp1 =pl->pHead;//temp1 to iterate on the unsorted list -pl-  ( a local varaible )
           while(temp1 != NULL )
           {
                student* pn =(student*)malloc(sizeof(student));

                 if(pn != NULL)
                     {
                          strcpy(  pn->name,temp1->name);
                          strcpy(  pn->address,temp1->address);
                          strcpy(  pn->phone,temp1->phone);
                          pn->ID=temp1->ID;
                          pn->score=temp1->score;
                          pn->dob.day=temp1->dob.day;
                          pn->dob.month=temp1->dob.month;
                          pn->dob.year=temp1->dob.year;
                          pn->pNext = NULL;
                          pn->pPrev = NULL;
                         if(spl->pHead == NULL)//list is empty
                            {
                              spl->pHead = pn;
                              spl->pTail = pn;
                            }
                         else //list is not Empty
                            {
                              student *temp2 =spl->pHead;//temp2 to iterate on the new list -spl-  ( a local varaible )
                               while(temp2 != NULL &&(pn->score)<(temp2->score))
                                {
                                   temp2 = temp2->pNext;
                                }
                               if(temp2 == spl->pHead)//insert at head
                                {
                                    spl->pHead->pPrev = pn;//1- assign new node to be (old head prev)
                                    pn->pNext = spl->pHead;//2- assign new node next to be old head
                                    spl->pHead = pn;//3- assign new head

                                }
                               else if(temp2 == NULL)//insert at Tail
                                {
                                   spl->pTail->pNext = pn;
                                   pn->pPrev = spl->pTail;
                                   spl->pTail = pn;
                                }
                                else
                                 {
                                   pn->pPrev = temp2->pPrev;
                                   pn->pNext = temp2;
                                   temp2->pPrev->pNext = pn;
                                   temp2->pPrev = pn;
                                  }
                                }

                               spl->size++;
                               temp1 = temp1->pNext;

                         }

          }

    }
}
