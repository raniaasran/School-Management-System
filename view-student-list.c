#include <stdio.h>
#include <stdlib.h>
#include "student-list.h"
void VIEW_STUDENT_LIST(student_list* pl)
{   printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 STUDENT LIST \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t\t\n");
    printf("\t\t===============================================================================================\t\t\n");
    printf("\t\tID\t\tName\t\tScore\t\tPhone\t\tAddress\t\t\tDOB\t\t\n");
    printf("\t\t===============================================================================================\t\t\n");
    student *temp =pl->pHead;//temp is a local varaible
           while(temp != NULL )
            {
              printf("\t\t%-10d\t%-12s\t%-8f\t%-12s\t%-20s\t%-2d-%-2d-%-2d\t\n\n", temp->ID, temp->name, temp->score, temp->phone,temp->address,temp->dob.day,temp->dob.month,temp->dob.year);
              temp=temp->pNext;
            }

}
