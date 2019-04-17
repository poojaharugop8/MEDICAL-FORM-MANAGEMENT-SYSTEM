#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>

struct hospital
{
    int id;
    char name1[50];
    char sur[50];
    int age;
    char bg[3];
    char sex[2];
    int day;
    int day1;
    int month;
    int month1;
    int year;
    int year1;
    char city[50];
    long cno;
    char ms[1];
    char name2[50];
    long cno2;
    char mc[50];
    char before[2];
    int ok;
    int date1,date2;
    char occ;
}h;

struct hospitals
{
    int did;
    char name[50],sur[50];
    char sex;
    int age;
    long int cno;
    char city[100];
    char roa[100];
    int day;
    int month;
    int year;
    char rfd[100];
    char fees[1];
    int rno;
    int amt;
}d;

void admit();
void admit_disp();
void discharge();
void discharge_disp();
void disp();

#endif // HOSP_H_INCLUDED



