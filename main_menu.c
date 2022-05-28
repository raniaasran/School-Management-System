#include <stdio.h>
#include <stdlib.h>
#include "student-list.h"
int MAIN_MENU ()
{
        int C;
        printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t\t\t\t\n");
        printf("\n===================================\n");
        printf("Please Enter your choice\n");
        printf("1-Add student\n2-Delete student\n3-Update student data\n4-Print list of students\n5-Rank students\n6-Update students score\n7-Exit\n");
        printf("\n===================================\n");
        fflush(stdin);
        scanf("%d",&C);
        return C ;

}
