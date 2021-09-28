#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
	struct node* prev;
}Node;

Node* getNode(int data, Node* next, Node* prev);
Node* formList();

int main()
{
	return 0;
}

Node* getNode(int data, Node* next, Node* prev)
{
	Node* node = (Node*)malloc(sizeof(Node));
	if (!node) exit(1);
	node->next = next;
	node->prev = prev;
	node->data = data;
	return node;
}

Node* formList()
{
	
}