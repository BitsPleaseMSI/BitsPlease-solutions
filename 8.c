#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    struct ListNode* next;
};

struct ListNode* NewListNode(int data)
{
    struct ListNode* node = new ListNode;
    node->data = data;
    node->next = NULL;

    return node;
}

void PrintList(struct ListNode* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}

struct ListNode* RemoveMiddleNode(struct ListNode* head)
{
// Complete This function.
	int n=0;
	ListNode *ptr = head;	
	while(n<(9/2)) {
		ptr=ptr->next;
	}
	ptr->next = ptr->next->next;
	free(ptr);
    return head;
}

int main()
{

    struct ListNode* head = NewListNode(10);
    struct ListNode* newhead = head;

    for(int i=10;i<=24;i+=2)
    {
        newhead->next = NewListNode(i);
        newhead = newhead->next;
    }
    PrintList(head);
    newhead = RemoveMiddleNode(head);
    printf("\n");
    PrintList(newhead);
    return 0;
}
