// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


 // } Driver Code Ends
//User function Template for C

//Function to insert a node at the begin of the linked list.
struct Node *insertAtBegining(struct Node *head, int x) {

	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=head;
	return newNode;
}


//Function to insert a node at the end of the linked list.
struct Node *insertAtEnd(struct Node *head, int x)  {

	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=NULL;
    if(head==NULL)
        return newNode;
	struct Node *t=head;
	while(t->next)
	    t=t->next;
	t->next=newNode;
	return head;
}


// { Driver Code Starts.

void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n");
}

int main(){
    
    int t;
    scanf("%d", &t);
    while (t--)
	{
    	int n;
    	scanf("%d", &n);
		struct Node *head = NULL;
		for (int i = 0; i < n; ++i)
		{
			int data, indicator;
			scanf("%d", &data);
			scanf("%d", &indicator);
			if (indicator)
				head = insertAtEnd(head, data);
			else
				head = insertAtBegining(head, data);
		}
		printList(head);
	}
	return 0;
}  // } Driver Code Ends