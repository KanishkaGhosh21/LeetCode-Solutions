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


//Function to insert a node in the middle of the linked list
struct Node* insertInMiddle(struct Node* head, int x)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->next=NULL;
    // if(!head)
    //     return newNode;
    struct Node *slowPtr=head;
    struct Node *fastPtr=head;
    while(fastPtr->next && fastPtr->next->next)
    {
        fastPtr=fastPtr->next->next;
        slowPtr=slowPtr->next;
    }
    
    newNode->next=slowPtr->next;
    slowPtr->next=newNode;
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


int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		int first;
		scanf("%d", &first);
		struct Node *head;
		head = (struct Node *) malloc(sizeof(struct Node));
		head->data = first;
		head->next = NULL;
		struct Node *tail = head;

		for (int i = 1; i < n; ++i)
		{
			int data;
			scanf("%d", &data);
			struct Node *temp;
			temp = (struct Node *) malloc(sizeof(struct Node));
			temp->data = data;
			temp->next = NULL;
			tail->next = temp;
			tail = tail->next;
		}

		int x;
		scanf("%d", &x);
		head = insertInMiddle(head, x);
		printList(head);
	}
	return 0;
}  // } Driver Code Ends