/* Binary Search Tree */
#include<stdio.h>
#include<stdlib.h>
/* bst node */
typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}node;
node *root;

void add(int x){
	struct node *klon;
	struct node *temp;
	temp = (node *)malloc(1*sizeof(node));
	/* put in the data */
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	/* is root empty */
	if(!root){
		root=temp;
		return;
	}
	
	klon=root;
	while(1){
		if(temp->data > klon->data){ //If the added value is greater than the root
			if(klon->right == NULL){ //If the right side is empty
				klon->right = temp;
				return;
			}
			else{  //If the right side is not empty
				klon = klon->right;
				continue;
			}
		}
		else{ //If the added value is not root greater
			if(klon->left == NULL){ //If the left side is empty
				klon->left = temp;
				return;
			}
			else{ //If the left side is not empty
				klon = klon->left;
				continue;
			}
		}
	}
	return;
}

void travel(node *temp){            //LVR
	if(!temp) return;
	printf("%d ", temp->data);      //V  = visit
	travel(temp->left);             //L  = left
	travel(temp->right);            //R  = right
}

void find(int x){
	node *temp=root;
	
	while(1){
		if(x==temp->data){
			printf("yes we found, There is also BST .");
			return;
		}
		if(x > temp->data){
			if(temp->right == NULL){
				printf("Searched value not found.");
				return;
			}
			else{
				temp = temp->left;
				continue;
			}
		}
	}
	return;
}

void search(){ //Ask for search value
	int i;
	printf("\nPlease enter the value to search for : ");
	scanf("%d",&i);
	find(i);
	
	return;
}

/* Driver program to test above function*/
int main(){
	
	add(20);
	add(30);
	add(10);
	add(33);
	add(15);
	add(32);
	add(25);
	add(28);
	add(1);
	add(99);
	add(1000);
	
	search();
	
	//printf("%d",root->data);
	
	//travel(root);
	return 0;
}
