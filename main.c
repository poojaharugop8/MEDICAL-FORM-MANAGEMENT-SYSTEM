
#include "header.h"


void main()
{
    int option;
    for(;;)
    {
    disp();
    printf("\n\n\n                           $$ MENU $$\n");
    printf("\n                   [1].Add Application Form");
    printf("\n                   [2].Display Application Form");
    printf("\n                   [3].Add Discharge Form");
    printf("\n                   [4].Display Discharge Form");
    printf("\n                   [5].Exit\n\n");
    printf("\n\nEnter your Choice(1-5):\n");
    scanf("%d",&option);

    switch(option)
    {
        case 1: printf("\n                                           ***** \n");
                printf("                                   && ADMISSION FORM &&\n");
                printf("                                           *****  \n");
                admit();
                break;
        case 2: printf("\n                                             ***** \n");
                printf("                                   && VIEW ADMISSION FORM  &&\n");
                printf("                                             *****  \n");
                admit_disp();
                break;
        case 3: printf("\n                                           ***** \n");
                printf("                                   && DISCHARGE FORM &&\n");
                printf("                                           *****  \n");
                discharge();
                break;
        case 4: printf("\n                                             ***** \n");
                printf("                                   && VIEW DISCHARGE FORM &&\n");
                printf("                                             *****  \n");
                discharge_disp();
                break;
        case 5: exit(0);
                break;
        default:exit(0);
    }
    }
}
