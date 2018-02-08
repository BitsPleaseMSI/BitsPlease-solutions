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
	ListNode *ptr=head;
  int i=1, count=1;
  while(ptr!=NULL) { //counting number of nodes
    ptr=ptr->next;
    count++;
  }
  ptr=head;
  while(i!=(count/2)-1) { //going till (mid-1)th node
    ptr=ptr->next;
    i++;
  }
  ListNode *x = ptr->next; 
  ptr->next=ptr->next->next; //linking ptr to the next of ptr->next
  free(x); 
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
