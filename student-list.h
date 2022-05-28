#ifndef  _STUDENT_LIST_H_
#define  _STUDENT_LIST_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 20
////////////////////////////////////////////////////////////////////////
typedef struct student
{
    char name [MAXSIZE];
    char address[MAXSIZE];
    char phone [MAXSIZE];
    int ID;
    float score;
    struct student *pNext;
    struct student *pPrev;
    struct DOB
    {
        int day;
        int month;
        int year;
    }dob;

}student;

////////////////////////////////////////////////////////////////////////////
typedef struct student_list
{
    student* pHead;
    student* pTail;
    int idf;//first id(update every insert)
    int idl;//last id constsnt since the list've been created
    int size ;
}student_list;


int MAIN_MENU ();
void NEW_STUDENT(student_list* pl);
void DELETE_STUDENT(student_list* pl,int id);
void STUDENT_EDIT(student_list* pl,int id);
void RANK_STUDENT(student_list* pl ,student_list*spl);
void STUDENT_SCORE(student_list* pl);
void VIEW_STUDENT_LIST(student_list* pl);
bool ListEmpty(student_list* pl);
student* searchstud(int id,student_list* pl);
void createList(student_list * pl);

#endif //_STUDENT_LIST_H_

