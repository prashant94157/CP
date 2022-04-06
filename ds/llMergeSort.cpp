#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node *next;
};

void insertAtBegin(node **head,int x)//**head is reference to head
{
    node *newNode = new node();
    newNode -> data = x;
    newNode->next=*head;
    *head=newNode;
}

void printList(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}

void mergeSort(node **headRef)
{
    node *head = *headRef;
    if( head == NULL && head->next == NULL )
        break;
    node *a = NULL , *b = NULL;

}

int main()
{
    node *head = NULL;
    insertAtBegin(&head,1);
    insertAtBegin(&head,11);
    insertAtBegin(&head,3);
    insertAtBegin(&head,9);
    insertAtBegin(&head,5);
    insertAtBegin(&head,-5);
    insertAtBegin(&head,7);
    insertAtBegin(&head,-8);
    insertAtBegin(&head,0);
    insertAtBegin(&head,-1);
    insertAtBegin(&head,11);
    insertAtBegin(&head,13);
    insertAtBegin(&head,15);
    insertAtBegin(&head,13);
    insertAtBegin(&head,15);
    insertAtBegin(&head,10);
    printList(head);

    mergeSort(&head);
}
