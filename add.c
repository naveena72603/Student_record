#include"header.h"
void add_record(ST **ptr)
{
	ST *data=(ST*)malloc(sizeof(ST));
	printf("\t\t\tENTER THE STUDENT NAME,PERCENTAGE: ");
	scanf( "%19s %f",data->name,&data->mark);
	data->roll=i++;
	data->next=0;
	if(*ptr==0)
	{
		*ptr=data;
	}
	else
	{
		ST *last=*ptr;
		while(last->next!=NULL)
			last=last->next;
		last->next=data;
	}
}
