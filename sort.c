#include"header.h"
void sort(ST **p,int c,char op);
void sort_list(ST **ptr)
{
	if(*ptr==0){
        puts("File is empty. No records to display.\n");
        return;
	}
	char op;
        printf("+-------------------------------------+\n");
        printf("|      N/n : Sorting with Name        |\n");
        printf("+-------------------------------------+\n");
        printf("|      P/p : Sorting with Percentage  |\n");
        printf("+-------------------------------------+\n");
        printf("       Enter your choice : ");
        scanf(" %c",&op);
       
	ST *t=*ptr;
	int c=0,i;
	while(t!=0){
		t=t->next;c++;}
	t=*ptr;
	ST **p=(ST**)malloc(c*sizeof(ST*));
	for(i=0;i<c;i++)
	{
		p[i]=t;
		t=t->next;
	}

	switch(op|32)
        {

                case 'n':sort(p,c,'n');return;
                case 'p':sort(p,c,'p');return;
                default:printf("Invalid choice\n");return;
        }
}
void sort(ST **p,int c,char op)
{
	 int i,j;
        ST *temp;
        for(i=0;i<c-1;i++)
        {
                for(j=0;j<c-i-1;j++)
                {
                        if(((op=='p')&&(p[j]->mark<p[j+1]->mark))|| ((op=='n')&&(strcmp(p[j]->name,p[j+1]->name)>0)))
                        {
                                temp = p[j];
                                p[j] = p[j+1];
                                p[j+1] = temp;
                        }
                }
        }
	if(op=='n')
		printf("Student Record Sorted based on NAME \n");
	if(op=='p')
		printf("Student Record Sorted based on PERCENTAGE \n");
        printf("+-----------+---------------------------+---------------+\n");
        printf("| ROLL-NO   | STUDENT NAME              | PERCENTAGE    |\n");
        printf("+-----------+---------------------------+---------------+\n");
        for(i=0;i<c;i++)
        printf("| %-9d | %-25s | %-13.2f |\n",p[i]->roll,p[i]->name,p[i]->mark);
        printf("+-----------+---------------------------+---------------+\n");
}

