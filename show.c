#include"header.h"
void show_record(ST *ptr)
{
	if(ptr==0)
	{
		printf("File is empty. NO record to display\n");
		return ;
	}
	printf("****************************************\n");
	printf("* ROLL NO * STUDENT NAME *PERCENTAGE   *\n");
	printf("****************************************\n");
	while(ptr)
	{
		printf("*%9d *\t %-10s*\t%-7.2f*\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}

	printf("****************************************\n");
}

