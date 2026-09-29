#include"header.h"
void save_record(ST *ptr)
{
	FILE *fp=fopen("database.csv","w");
	ST *ptr1=ptr;
	fprintf(fp,"***************************************\n");
	fprintf(fp,"* ROLL-NO * STUDENT NAME * PERCENTAGE *\n");
	fprintf(fp,"***************************************\n");
	while(ptr!=0)
	{
		fprintf(fp,"* %-9d * %-15s * %-13.2f *\n",ptr->roll,ptr->name,ptr->mark);
		ptr = ptr->next;
	}
	fprintf(fp,"*****************************************\n");
	fclose(fp);

	FILE *fs=fopen("studentdata.csv","w");
	while(ptr1!=0)
	{
		fprintf(fs,"%d  %s  %f\n",ptr1->roll,ptr1->name,ptr1->mark);
		ptr1=ptr1->next;
	}
	fclose(fs);
	printf("\n");
	puts("Record Saved Successfully\n");
	printf("\n");
}

