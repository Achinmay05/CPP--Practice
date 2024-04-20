//a data structure is a way to store and organize data in a computer, so that it can be used efficiently.
#include <stdlib.h>
#include <stdio.h>
struct Node {
	int data;
	struct Node * next;
};

struct Node * head; //global variable can be accessed anywhere

void Insert(int x) {
struct Node * temp = (Node *)malloc(sizeof(struct Node));
temp->data = x;
temp->next = head;
head = temp;
}


void Print() {
	struct Node * temp = head; //we used temp variable as we can't update the head as we will lose it
	printf("List is : ");
	while(temp != NULL) {
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main() {
	head = NULL; //empty list
	printf("How many numbers ?\n");
	int n,i,x;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("enter the number \n");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
}