#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "student-list.h"

static void init_node( student * pe );

void NEW_STUDENT(student_list* pl)
{
    student* pn =(student*)malloc(sizeof(student));

    if(pn != NULL)
    {
        pn->ID=(pl->idl)+1;
        init_node(pn);
        if(pl->pHead == NULL)//list is empty
        {
            pl->pHead = pn;
            pl->pTail = pn;
        }
        else //list is not Empty
        {  printf(" ana hena\n");
           student *temp =pl->pHead;//temp is a local varaible
             // while(temp != NULL )
           while(temp != NULL &&strcmp(temp->name,pn->name)<0)

           {    printf(" ana hena2\n");
               temp = temp->pNext;
           }
           printf(" ana hena3\n");
           if(temp == pl->pHead)//insert at head
           {
               pl->pHead->pPrev = pn;//1- assign new node to be (old head prev)
               pn->pNext = pl->pHead;//2- assign new node next to be old head
               pl->pHead = pn;//3- assign new head

           }
           else if(temp == NULL)//insert at Tail
           {
               pl->pTail->pNext = pn;
               pn->pPrev = pl->pTail;
               pl->pTail = pn;
           }
           else
           {
               pn->pPrev = temp->pPrev;
               pn->pNext = temp;
               temp->pPrev->pNext = pn;
               temp->pPrev = pn;
           }
        }

        pl->idl++;
        pl->size++;

#if(ENABLE_DEBUGGING == ENABLE)
        printf(" is inserted\n");
#endif
    }
    else
      printf(" no enough mem");
}



static void init_node( student * pe )
{
    printf("Please Enter student name\n");
    fflush(stdin);
    scanf("%[^\n]%*c",pe->name);
    printf("Please Enter student address\n");
    fflush(stdin);
    scanf("%[^\n]%*c",pe->address);
    printf("Please Enter student phone\n");
    fflush(stdin);
    scanf("%[^\n]%*c",pe->phone);
    printf("Please Enter The day of birth\n");
    fflush(stdin);
    scanf("%d",&(pe->dob.day));
    printf("Please Enter The month of birth\n");
    fflush(stdin);
    scanf("%d",&(pe->dob.month));
    printf("Please Enter The year of birth\n");
    fflush(stdin);
    scanf("%d",&(pe->dob.year));
    pe->score=0;
    pe->pNext = NULL;
    pe->pPrev = NULL;
}
