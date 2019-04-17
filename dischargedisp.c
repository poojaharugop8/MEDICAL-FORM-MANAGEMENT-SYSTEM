#include "header.h"

void discharge_disp()
{
       FILE *fd;
    int id;
    fd=fopen("discharge.txt","r+");
    if(!fd)
    {
        printf("File discharge.txt has failed to open ");
        exit(0);
    }
    printf("Enter the id number :");
    scanf(" %d",&id);
    while(fread(&d,sizeof(d),1,fd))
    {
        if(d.did==id)
        {

    printf("\nPATIENTS INFORMATION\n");
    printf("First Name :%s\n",d.name);
    printf("Last Name :%s\n",d.sur);
    printf("\nAge :%d\n",d.age);
    printf("City :%s\n",d.city);
    printf("Contact Number :%d\n",d.cno);
    printf("\nDate Of Discharge :%d/%d/%d\n",d.day,d.month,d.year);
    printf("\nReason of Admit : %s\n",d.roa);
    printf("Reason For Discharge : %s\n",d.rfd);
    printf("Medical Fees paid(Y/N)? :");
    printf(" %s\n",d.fees);

    printf("Receipt Number :%d",d.rno);
}
    }
fclose(fd);
}
