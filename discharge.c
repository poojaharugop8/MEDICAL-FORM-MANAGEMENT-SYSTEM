#include "header.h"
void discharge()
{
    FILE *fd;
    fd=fopen("discharge.txt","a+");
    if(!fd)
    {
        printf("File opened discharge.txt failed");
        exit(0);
    }
    printf("ENTER THE PATIENT'S INFORMATION\n");
    getchar();
    printf("Enter the ID number :");
    scanf(" %d",&d.did);
    getchar();
    printf("First Name:");
    scanf(" %s",d.name);
    printf("Last Name:");
    scanf(" %s",d.sur);
    getchar();
    printf("Age:");
    scanf("%d",&d.age);
    getchar();

    printf("Contact Number:");
    scanf("%d",&d.cno);

    getchar();
     printf("City:");
    scanf(" %s",d.city);
    getchar();
    printf("Reason of Admit :");
    scanf(" %s",d.roa);
    getchar();
     printf("Reason for Discharge :");
    scanf(" %s",d.rfd);
    getchar();
    printf("Date of Discharge\n");
    printf("Date:");scanf("%d",&d.day);getchar();
    printf("Month:");scanf("%d",&d.month);getchar();
    printf("Year:");scanf("%d",&d.year);
    getchar();


    //getchar();

     printf("Medical Fees Paid(Y/N)? :");
    scanf(" %c",d.fees);
    getchar();
    printf("Receipt Number :");
    scanf(" %d",&d.rno);

    printf("");
 fwrite(&d,sizeof(d),1,fd);

fclose(fd);

}
