#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct st
{
	int roll;
	char name[20];
	float mark;
	struct st *next;
}ST;
int i;
void first(ST **ptr);

void add_record(ST **ptr);
void delete_record(ST **ptr);  
void delete_all(ST **ptr);	//L
void show_record(ST *ptr);    //s
void modify_record(ST *ptr);	//m
void save_record(ST *ptr);	//v
void terminate(ST *ptr);     	//e
void sort_list(ST **ptr);	//t


