/* Adding and listing data with linked list */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Link list node */
typedef struct node{
	int data;
	struct node *next;
	struct node *prev;
}node;
node *head;

/* adding data */
void add(int x){
	/* allocate node */
	node *t2=head;
	node *temp = (node *)malloc(1*sizeof(node *));
	/* put in the data */
	temp->data = x;
	temp->next = NULL;
	
	
	if(!head){//Is the head empty
		head = temp;
		temp->next = temp;//head->next = head;
		return;
	}
	
	t2 = t2->next;//1 
	head->next = temp;//2
	temp->next = t2;//3
	head = head->next;//4
	
	
	return;
}

void list(){
	node *temp = head;
	
	if(!head)
		return;
	/* Create a loop for testing */	
	do{
		
		
		printf("%d\n",temp->data);
		temp = temp->next;
	}while(temp!=head);
}
/* Driver program to test above function */
int main(){
	
	add(11);
	add(77);
	add(55);
	add(88);
	
	list();
	return 0;
}
