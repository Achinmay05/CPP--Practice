#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node * next;
};

struct Node * head; //pointer to first Node

void Insert(int data, int n){
	Node * temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	
}

void Print(){
	
} 

int main(){
	head = NULL; //empty list
	
}