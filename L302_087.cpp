#include <iostream>

struct Node{
	int data;
	Node * next;
};

Node *search_list(Node *node, int item){
	if(node == NULL) return NULL;
	if(node->data == item) return(node);
	return ( search_list(node -> next, item));
}

int main(){
	return 1;
}
