#include <stdio.h>
#include <stdlib.h>
#include "student-list.h"
#define ADDSTUD   1
#define DELETESTUD  2
#define EDITSTUDDATA 3
#define PRINTLIST   4
#define RANK        5
#define UPDATESCORE  6
#define EXIT         7
int main()
{  int i;
   student_list l;
   createList(&l);
   student_list rl;
   createList(&rl);
   int choice;
    do
    {
        choice=MAIN_MENU ();
        switch(choice)
        {
        case ADDSTUD:
            NEW_STUDENT(&l);
            break;
        case DELETESTUD:
            printf("Please Enter the id of student you want to delete\n");
            fflush(stdin);
            scanf("%d",&i);
            DELETE_STUDENT(&l,i);
            break;
        case EDITSTUDDATA:
        printf("Please Enter id of the student you want to update his data\n");
        fflush(stdin);
        scanf("%d",&i);
        STUDENT_EDIT(&l,i);
          break;
        case PRINTLIST:
         VIEW_STUDENT_LIST(&l);
          break;
        case RANK:

            RANK_STUDENT(&l ,&rl);
            VIEW_STUDENT_LIST(&rl);
            break;

        case UPDATESCORE:
             STUDENT_SCORE(&l);
            break;
        case EXIT:
           printf("Good Bye\n");
        break;
        default:
            printf("wrong choice\n");
        }
    }while(choice != EXIT);

     return 0;
}



