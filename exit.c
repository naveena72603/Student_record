#include"header.h"
void terminate(ST *ptr)
{
	char op;
        printf("***************************************\n");
        printf("*      S/s :Save and Exit             *\n");
        printf("***************************************\n");
        printf("*      E/e :Exit without Saving       *\n");
        printf("***************************************\n");
        printf("\n");
	printf("Enter your choice : ");
        scanf(" %c",&op);
        
	switch(op)
        {
                case 's':save_record(ptr);return;
                case 'S':save_record(ptr);return;	 
                case 'e':printf("Exit without saving the student Record\n");return;
                case 'E':printf("Exit without saving the student Record\n");return;
                default:printf("Invalid choice\n");return;
        }
}

