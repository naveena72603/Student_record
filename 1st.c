#include"header.h" 
void first(ST **ptr) 
{ 
	ST temp; 
	static ST *last1=NULL; 
	FILE *fp=fopen("studentdata.csv","r"); 
	if(fp==NULL) 
	{ 
		printf("\n"); 
		printf("NO DATA IN STUDENT FILE!\n"); 
		return; 
	} 
	while(fscanf(fp,"%d %s %f",&temp.roll,temp.name,&temp.mark)==3) 
	{ 
 
		ST *data=(ST*)malloc(sizeof(ST)); 
		*data=temp; 
		data->next=0; 
		if(*ptr==0) 
		{ 
			*ptr=data; 
			last1=data; 
		} 
		else 
		{ 
			last1->next=data; 
			last1=data; 
		} 
		if(temp.roll>=i) 
			i=temp.roll+1; 
	} 
	fclose(fp); 
} 

