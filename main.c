#include"header.h"
int i=1;
int main()
{ 
	char ch;
	struct st *hptr=NULL;
	first(&hptr);

	while(1)
	{
		sleep(4);
		system("clear");
		char op;
		printf("\n");
		printf("\t\t\t***************************************************\n");
 		printf("\t\t\t*       ***STUDENT RECORD MENU***                 *\n");
		printf("\t\t\t***************************************************\n");
		printf("\t\t\t*         A/a : Add New Record                    *\n");
		printf("\t\t\t*         D/d : Delete A Record                   *\n");  	
		printf("\t\t\t*         S/s : Show The List                     *\n");
		printf("\t\t\t*         M/m : Modify A record                   *\n");
		printf("\t\t\t*         V/v : Save                              *\n");
		printf("\t\t\t*         E/e : Exit                              *\n");
		printf("\t\t\t*         T/t : Sort The List                     *\n");
		printf("\t\t\t***************************************************\n");

		printf("\n\n");
		printf("\t\t\t\t ENTER YOUR CHOICE:");
		scanf(" %c",&op);
		printf("\n\n");
		switch(op|32)	{
			case 'a':
                                do
                                {                 
                                        add_record(&hptr);
                                        printf("\nDo you want to add another student record:(y/n): ");
                                        scanf(" %c",&ch);
                                }while(ch=='y');
                                break;

			case 'd':delete_record(&hptr);break;

			case 's':show_record(hptr);break;

			case 'm':modify_record(hptr);break;

			case 'v':save_record(hptr);break;

			case 'e':terminate(hptr);return 0;
				
			case 't':sort_list(&hptr);break;

				 
			default :printf("Invalid option \n");
		}
	}
}

