#include"header.h"
void delete_rollno(ST **ptr);
void delete_name(ST **ptr);
int disp_roll(ST *ptr);
void delete_record(ST **ptr)
{
	char op;
	printf("v***********************************************\n");
	printf("*     R/r : ENTER ROLL NO TO DELETE	       *\n");
	printf("*     N/n : ENTER THE NAME TO DELETE           *\n");
	printf("************************************************\n");
	printf("\n");
	printf(" Enter your choice:");
	scanf(" %c",&op);
	switch(op)
	{
		case 'R':
			delete_rollno(ptr);break;
	       	case 'r':
                        delete_rollno(ptr);break;
	       	case 'N':
                        delete_name(ptr);break;
		case 'n':
			delete_name(ptr);break;
		default:
			printf("INVALID  CHOICE\n");
			return;
	}
}
void delete_rollno(ST **ptr)
{

        int n=disp_roll(*ptr);char op;
        ST *prev,*temp=*ptr;
        while(temp!=0)
        {
                if(temp->roll==n){
			 printf("\n");
                	printf("Are you sure you want to delete this record? (y/n): ");
                	scanf(" %c",&op);
                	if(op=='y'){
                           if(*ptr==temp)
                           *ptr=temp->next;
                           else
                           prev->next=temp->next;
			   free(temp);
			   puts("Record Deleted Successfully\n");
			   return;}
			else
			return;
                }
                else
                {
                        prev=temp;
                        temp=temp->next;
                }
	}
	puts("Record Not found\n");
}




void delete_name(ST **ptr)
{
        char op,a[20];int c=0;
        printf("Enter Name: ");
        scanf("%s",a);
        ST *prev,*temp=*ptr,*c1=*ptr;

                        printf("*****************************************\n");
                        printf("* ROLL-NO | STUDENT NAME  | PERCENTAGE  *\n");
                        printf("*****************************************\n");
	while(c1!=0){
		if((strcmp(a,c1->name))==0){
                       printf("| %-9d | %-25s | %-13.2f |\n",c1->roll,c1->name,c1->mark);
			c++;
		}
		c1=c1->next;
                        printf("*****************************************\n");
	}
	if(c==0){
	 puts("Record Not found\n");
	 return;
	}
	else if(c>1){
	puts("Multiple records found.\n");
	delete_rollno(ptr);
	return;
	}
	else if(c==1){
           while(temp!=0)
           {
                if((strcmp(a,temp->name))==0)
                {
                        printf("Are you sure you want to delete this record? (y/n): ");
                        scanf(" %c",&op);
                        if(op=='y'){
                           if(*ptr==temp)
                           *ptr=temp->next;
                           else
                           prev->next=temp->next;
                           free(temp);
                           puts("Record Deleted Successfully");
                           return;}
                        else
                        return;
                }
                else
                {
                        prev=temp;
                        temp=temp->next;
                }
          }
       }
}


int disp_roll(ST *ptr)
{
	int n;
	printf("Enter Roll number: ");
        scanf("%d",&n);
	ST *c1=ptr;
         while(c1!=0){
                if(c1->roll==n){
		        printf("\n");
                        printf("+-----------+---------------------------+---------------+\n");
                        printf("| ROLL-NO   | STUDENT NAME              | PERCENTAGE    |\n");
                        printf("+-----------+---------------------------+---------------+\n");
                        printf("| %-9d | %-25s | %-13.2f |\n",c1->roll,c1->name,c1->mark);
                        printf("+-----------+---------------------------+---------------+\n");
                }
                c1=c1->next;
        }
	 return n;
}

