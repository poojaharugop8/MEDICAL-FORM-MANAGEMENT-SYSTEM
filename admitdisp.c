#include "header.h"

void admit_disp()
{
    FILE *fp;
    int n;
    fp=fopen("admit.txt","r+");
    if(!fp)
    {
        printf("File admit.txt has failed to open!");
        exit(0);
    }
    printf("Enter the id number :");
    scanf(" %d",&n);
    while(fread(&h,sizeof(h),1,fp))
    {
        if(h.id==n)
        {

    printf("\nPATIENT'S INFORMATION\n");
    printf("First Name : %s\n",h.name1);
    printf("Last Name : %s\n",h.sur);
    printf("Age : %d\n",h.age);
    printf("Sex(M/F) : %s\n",h.sex);
    printf("Date of Birth : %d/%d/%d\n",h.day,h.month,h.year);
    printf("Blood Group : %s\n",h.bg);

    //printf("\n");
    printf("City : %s\n",h.city);
    printf("Date of admission : %d/%d/%d\n",h.day1,h.month1,h.year1);
    printf("Contact Number : %d\n",h.cno);
    printf("Marital Status : ");
    printf("%s\n",h.ms);
    printf("\n\n\nGUARDIAN'S INFORMATION\n");
    printf("Name : %s\n",h.name2);
    printf("Contact Number : %d\n",h.cno2);
    printf("\n\n\nMEDICAL INFORMATION\n");
    printf("Medical Complication (if any) : ");
    printf("%s\n",h.mc);
    printf("Admitted before in this Hospital? (Y/N) : %s\n",h.before);
    if(h.ok==0)
        printf("Is it OK if we let anyone know that you are admitted here if queried? : YES\n");
    else
        printf("Is it OK if we let anyone know that you are admitted here if queried? : NO\n");
}
    }

fclose(fp);
}
