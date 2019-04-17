#include "header.h"

void admit()
{
    FILE *fp;
    fp=fopen("admit.txt","a+");
    if(!fp)
    {
        printf("File opened admit.txt failed");
        exit(0);
    }

    printf("ENTER THE PATIENT'S INFORMATION\n");
    getchar();
    printf("Id Number :");
    scanf(" %d",&h.id);
    getchar();
    printf("First Name:");
    scanf(" %s",h.name1);
    printf("Last Name:");
    scanf(" %s",h.sur);
    //scanf(" %s",h.name1);
    //getchar();
    printf("Age:");
    scanf(" %d",&h.age);
    getchar();
    printf("Sex(M/F):");
    scanf(" %s",h.sex);
    getchar();
    printf("City:");
    scanf(" %s",h.city);
    getchar();
    printf("Blood Group:");
    scanf(" %s",h.bg);
    getchar();
    printf("Marital Status(Y/N):");
    scanf(" %s",h.ms);

    printf("Date of Birth\n");
    printf("Date:");
    scanf(" %d",&h.day);
    getchar();
    printf("Month:");
    scanf(" %d",&h.month);
    getchar();
    printf("Year:");
    scanf(" %d",&h.year);

    printf("Date of Admission\n");
    printf("Date:");
    scanf(" %d",&h.day1);
    getchar();
    printf("Month:");
    scanf(" %d",&h.month1);
    printf("Year:");
    scanf(" %d",&h.year1);
    printf("Contact Number:");
    scanf("%d",&h.cno);
    getchar();
    printf("\n\nENTER THE GUARDIAN'S INFORMATION\n");
    printf("Name:");
    scanf("%s",h.name2);
    printf("Contact Number:");
    scanf("%d",&h.cno2);

    printf("\n\nENTER THE MEDICAL INFORMATION\n");
    printf("Medical complications(if any):");
    scanf("%s",h.mc);
    printf("Admitted before in this hospital?(Y/N) :");
    scanf("%s",h.before);
    printf("\nIs it OK if we let anyone know that you are admitted here if queried?\nEnter 0 if yes and 1 if no : ");
    scanf("%d",&h.ok);

    fwrite(&h,sizeof(h),1,fp);
    fclose(fp);

}
