//adding data to linked list
#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node{
	int data;
	struct node *next;
};

void add(int value){
	/* pointer is defined */
	struct node *temp; 
	temp = ((struct node *)malloc(1*sizeof(struct node)));
	/* put in the data */
	temp->data = value; 
	/* test output */
	printf("%d", temp->data);
	return;
}

/* Driver program to test above function*/
int main(){
	
	add(11); //The value to be added to the linked list is sent to the function
	
	printf("\nHello World");
	
	
	return 0;
}
