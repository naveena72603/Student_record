#include "header.h"
void md_roll(ST *ptr);
void md_name(ST *ptr);
void modify_record(ST *ptr)
{
	if(ptr==NULL)
	{
		printf("FILE IS EMPTY. NO RECORDS TO MODIFY.\n");
		return;
	}
	char op;
	printf("*************************************************************\n");
	printf("*     R/r : Enter roll no to search for student updation   *\n");
	printf("*************************************************************\n");
	printf("*     N/n: Enter name to search for student updation       *\n");
	printf("*************************************************************\n");
	printf("\n");
	printf("Enter your choice: ");
	scanf(" %c", &op);
	switch(op)
	{
		case 'R':
		case 'r':
			md_roll(ptr);
			break;
		case 'N':
		case 'n':
			md_name(ptr);
			break;
		default:
			printf("Invalid choice\n");
	}
}
void md_name(ST *ptr)
{
	char name[50];
	char op;
	int count = 0;
	printf("Enter Name: ");
	scanf("%s", name);
	ST *temp = ptr;
	ST *c1 = ptr;
	printf("***********|***************|*************\n");
	printf("* Roll No  |   Name        | Percentage *\n");
	printf("***********|***************|*************\n");
	while(c1)
	{
		if(strcmp(name, c1->name) == 0)
		{
			printf("| %-8d | %-23s | %-10.2f |\n",c1->roll,c1->name,c1->mark);
			count++;
		}
		c1 = c1->next;
	}
	printf("***********|***************|*************\n");
	if(count==0)
	{
		printf("Record Not Found\n");
		return;
	}
	if(count>1)
	{
		printf("Multiple records found.\n");
		printf("Search using Roll Number.\n");
		return;
	}
	while(temp)
	{
		if(strcmp(name, temp->name) == 0)
		{
			printf("Modify this record? (y/n): ");
			scanf(" %c", &op);

			if(op == 'y' || op == 'Y')
			{
				int choice;
				printf("\n1. Name\n");
				printf("2. Percentage\n");
				printf("3. Both\n");
				printf("Enter choice: ");
				scanf("%d", &choice);
				switch(choice)
				{
					case 1:
						printf("Enter New Name: ");
						scanf("%49s", temp->name);
						break;

					case 2:
						printf("Enter New Percentage: ");
						scanf("%f", &temp->mark);
						break;

					case 3:
						printf("Enter New Name: ");
						scanf("%49s", temp->name);

						printf("Enter New Percentage: ");
						scanf("%f", &temp->mark);
						break;

					default:
						printf("Invalid Choice\n");
						return;
				}

				printf("Record Updated Successfully\n");
			}

			return;
		}

		temp = temp->next;
	}
}

void md_roll(ST *ptr)
{
	int roll;
	char op;
	printf("Enter Roll Number: ");
	scanf("%d", &roll);
	ST *temp = ptr;
	while(temp)
	{
		if(temp->roll == roll)
		{
			printf("\nRecord Found\n");
			printf("Roll No    : %d\n", temp->roll);
			printf("Name       : %s\n", temp->name);
			printf("Percentage : %.2f\n", temp->mark);
			printf("\nModify this record? (y/n): ");
			scanf(" %c", &op);
			if(op == 'y' || op == 'Y')
			{
				int choice;

				printf("\n1. Name\n");
				printf("2. Percentage\n");
				printf("3. Both\n");
				printf("Enter choice: ");
				scanf("%d", &choice);

				switch(choice)
				{
					case 1:
						printf("Enter New Name: ");
						scanf("%49s", temp->name);
						break;

					case 2:
						printf("Enter New Percentage: ");
						scanf("%f", &temp->mark);
						break;

					case 3:
						printf("Enter New Name: ");
						scanf("%49s", temp->name);

						printf("Enter New Percentage: ");
						scanf("%f", &temp->mark);
						break;

					default:
						printf("Invalid Choice\n");
						return;
				}

				printf("Record Updated Successfully\n");
			}

			return;
		}

		temp = temp->next;
	}

	printf("Record Not Found\n");
}



