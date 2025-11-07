#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
	int x;
	struct Node* next;
} Node;

void insert_end(Node** root, int value)
{
	Node* new_node = malloc(sizeof(Node));
	if (new_node == NULL)
		return;
	new_node->next = NULL;
	new_node->x = value;
	if (!*root)
		*root = new_node;
	Node* curr = *root;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

void insert_begining(Node** root,int value)
{
	Node* new_node = malloc(sizeof(Node));
	if (!new_node)
		return;
	new_node->x = value;
	new_node->next = *root;
	*root = new_node;
}

void insert_after(Node* node, int value)
{
	if (node == NULL)
        return;
	Node* new_node = malloc(sizeof(Node));
	if (!new_node)
		return;
	new_node->x = value;
	new_node->next = node->next;
	node->next = new_node;
}

void insert_sorted(Node** root, int value)
{
	Node *curr = *root;
	if (curr == NULL || curr->x >= value)
	{
		insert_begining(root, value);
		return;
	}
	
	while (curr->next != NULL && curr->next->x < value)
		curr = curr->next;
	
	insert_after(curr,value);

}

void removing_element(Node** root, int value)
{
	if (*root == NULL)
	{
		insert_begining(root, value);
		return;
	}
	Node* curr = *root;
	if (curr->x == value)
	{
		curr->next = curr->next->next;
		free(curr);
		return;
	}

	while (curr->next != NULL)
	{
		if (curr->next->x == value)
		{
			Node* tmp = curr->next;
			curr->next = curr->next->next;
			free(tmp);
			return;
		}
		else 
			curr = curr->next;
	}
}
void reverse(Node** root)
{
	Node* next = NULL;
	Node* preve = NULL;
	Node* curr = *root;
	while(curr) 
	{
		next = curr->next;
		curr->next = preve;
		preve = curr;
		curr = next;
	}
	*root = preve;
}

int main(void)
{
    Node* root = NULL;

    insert_sorted(&root, 10);
    insert_sorted(&root, 30);
    insert_sorted(&root, 0);
    insert_sorted(&root, 20);
	reverse(&root);    
	Node* tmp;
	for (Node* curr = root; curr != NULL; curr = tmp)
    { 
		tmp = curr->next;
		printf("%d ", curr->x);
		free(curr);
	}
}
