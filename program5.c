#include<stdio.h>
#include<stdlib.h>
struct Node{
	char data;
	struct Node *next;
	struct Node *prev;
};
void push(struct Node** head_ref, char new_data){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	new_node->prev = NULL;
	if ((*head_ref) != NULL)
	(*head_ref)->prev = new_node ;
	(*head_ref) = new_node;
}
int isPalindrome(struct Node *left){
	if (left == NULL)
	return 1;
	struct Node *right = left;
	while (right->next != NULL)
		right = right->next;
	while (left != right){
		if (left->data != right->data)
			return 0;
		left = left->next;
		right = right->prev;
	}
	return 1;
}
int main(){
	struct Node* head = NULL;
	push(&head, 'l');
	push(&head, 'e');
	push(&head, 'v');
	push(&head, 'e');
	push(&head, 'l');
	if (isPalindrome(head))
		printf("It is Palindrome\n");
	else
		printf("Not Palindrome\n");
	return 0;
}