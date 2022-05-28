#include <stdio.h>
#include <stdlib.h>
#include "student-list.h"
#define NAME    1
#define ADDRESS 2
#define PHONE   3
#define DOB     4
#define SCORE     5
void STUDENT_EDIT(student_list* pl,int id)
{int N;
 int choice;
 char* S;
 float F;
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
     else
     {
       printf("\n===================================\n");
       printf("What Is The Data U Want To Change?\n");
       printf("1-NAME\n2-ADDRESS\n3-PHONE\n4-DOB\n-DOB\n");
       printf("\n===================================\n");
       fflush(stdin);
       scanf("%d",&choice);
    switch(choice)
        {
        case NAME:
            printf("Please Enter The new name\n");
            fflush(stdin);
            scanf("%[^\n]%*c", S);
            strcpy( temp->name,S);
             break;
        case ADDRESS:
            printf("Please Enter The new address\n");
            fflush(stdin);
            scanf("%[^\n]%*c", S);
            strcpy( temp->address,S);
            break;
        case PHONE:
            printf("Please Enter The new phon number\n");
            fflush(stdin);
            scanf("%[^\n]%*c", S);
            strcpy( temp->phone,S);
            break;
        case DOB:
            printf("Please Enter The day of birth\n");
            fflush(stdin);
            scanf("%d",&N);
            temp->dob.day=N;
            printf("Please Enter The month of birth\n");
            fflush(stdin);
            scanf("%d",&N);
            temp->dob.month=N;
            printf("Please Enter The year of birth\n");
            fflush(stdin);
            scanf("%d",&N);
            temp->dob.year=N;
            break;
        case SCORE:
            printf("Please Enter The new score\n");
            fflush(stdin);
            scanf("%f", &F);
            temp->score=F;
            break;
           default:
            printf("wrong choice\n");


        }
     }
#if(ENABLE_DEBUGGING == ENABLE)
        printf(" edited\n");//temp->entry is a dangling ptr
#endif

  }//else


}
