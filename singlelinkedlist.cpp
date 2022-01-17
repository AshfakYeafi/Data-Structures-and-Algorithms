#include<stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node * address;
};

struct Node * head = 0 , *next, *new_node, *temp;

struct Node * create_node() {
	return (struct Node *) malloc(sizeof(struct Node));
}
void append(int data) {
	new_node = create_node();
	new_node->address = 0;
	new_node->data = data;

	if (head == 0) {
		head = new_node;
		head->data = data;
		temp = head;
	}
	else {
		temp->address = new_node;
		temp = new_node;
	}

}

void insert() {

}


void display() {
	temp = head;
	while (temp != 0) {
		printf("%d\n", temp->data);
		temp = temp->address;
	}
	// printf("%d\n", temp->data);
}

int main() {
	append(5);
	append(5);
	append(5);
	append(5);
	append(4);

	display();




}