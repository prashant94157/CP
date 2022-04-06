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

void insertAtEnd(node **head,int x)
{
    node *newNode = new node();
    newNode -> data = x;
    newNode -> next = NULL;
    if(*head==NULL)
    {
        *head = newNode;
        return;
    }
    node *n = *head;
    while(n->next!=NULL)
    {
        n=n->next;
    }
    n->next=newNode;
}

void insertAtPosition(node **head,int pos,int x)
{
    node *n=*head;
    while(--pos)
    {
        if(n->next!=NULL)
        n=n->next;
        else
        {
            cout<<"NOT POSSIBLE"<<endl;
            return;
        }
    }
    node *newNode = new node();
    newNode -> data = x;
    newNode->next=n->next;
    n->next=newNode;
}

void insertAtMid(node **head,int x)
{
    node *newNode = new node();
    newNode -> data = x;
    node *fast = *head, *slow=*head, *prevSlow=NULL;
    if(*head==NULL)
    {
        newNode->next=NULL;
        *head=newNode;
        return;
    }
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        prevSlow=slow;
        slow=slow->next;
    }
    if(fast!=NULL)
    {
        newNode->next = slow->next;
        slow->next=newNode;
    }
    else
    {
        newNode->next = prevSlow->next;
        prevSlow->next = newNode;
    }
}

bool Search(node *t, int x)
{
    while(t!=NULL)
    {
        if(t->data == x)
        return true;
        t=t->next;
    }
    return false;
}

void Reverse(node **head)
{
    node *prev = NULL, *current = *head, *nex = *head;
    if(current -> next == NULL)
    return;
    while(current!=NULL)
    {
        nex=nex->next;
        current->next = prev;
        prev = current;
        current = nex;
    }
    (*head) = prev;
}

node *add2no(node *a,node *b)
{
    node *head =NULL;
    int n=0;
    while(a!=NULL && b!=NULL)
    {
        n=n + a->data + b->data;
        insertAtEnd(&head,n%10);
        n/=10;
        a=a->next;
        b=b->next;
    }
    while(b!=NULL)
    {
        n=n + b->data;
        insertAtEnd(&head,n%10);
        n/=10;
        b=b->next;
    }
    while(a!=NULL)
    {
        n=n + a->data;
        insertAtEnd(&head,n%10);
        n/=10;
        a=a->next;
    }
    while(n>0)
    {
        insertAtEnd(&head,n%10);
        n/=10;
    }
    return head;
}

int size(node *a)
{
    int count=0;
    while(a!=NULL)
    {
        a=a->next;
        count++;
    }
    return count;
}

node *add2no2(node *a,node *b)
{
    node *head = NULL;

}
node *reverse (node *head, int k)
{
    node* current = head;
    node* next = NULL;
    node* prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
    head->next = reverse(next, k);

    /* prev is new head of the input list */
    return prev;
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

int main(){
   // node *head = NULL;
                                            //OUTPUT
/*
    insertAtBegin(&head,8);
    insertAtBegin(&head,7);
    printList(head);                        //7 8


    insertAtEnd(&head,9);
    printList(head);                        //7 8 9


    insertAtPosition(&head,5,0);            //NOT POSSIBLE
    printList(head);                        //7 8 9


    insertAtPosition(&head,2,0);
    printList(head);                        //7 8 0 9


    insertAtMid(&head,-1);
    printList(head);                        //7 8 -1 0 9


    insertAtMid(&head,-2);
    printList(head);                        //7 8 -2 -1 0 9

    cout<<Search(head,5)<<endl;
    cout<<Search(head,0)<<endl;

    //Reversing a linkedList

    Reverse(&head);
    printList(head);                       //9 0 -1 -2 8 7

*/
/*
    insertAtBegin(&head,1);
    insertAtBegin(&head,2);
    insertAtBegin(&head,3);
    insertAtBegin(&head,4);
    insertAtBegin(&head,5);
    insertAtBegin(&head,6);
    insertAtBegin(&head,7);
    insertAtBegin(&head,8);
    insertAtBegin(&head,9);
    insertAtBegin(&head,10);
    insertAtBegin(&head,11);
    insertAtBegin(&head,12);
    insertAtBegin(&head,13);
    insertAtBegin(&head,14);
    insertAtBegin(&head,15);
    insertAtBegin(&head,16);
    printList(head);

    Reverse(&head);
    printList(head);

    head = reverse(head,3);
    printList(head);

    */
    node *a=NULL,*b=NULL;
    insertAtEnd(&a,2);
    insertAtEnd(&a,6);
    insertAtEnd(&a,9);
    insertAtEnd(&a,9);
    printList(a);                           // 2 6 9 9

    insertAtEnd(&b,2);
    insertAtEnd(&b,7);
    insertAtEnd(&b,2);
    printList(b);                           //2 7 2

    node *c = add2no(a,b);
    printList(c);                           //4 3 2 0 1 "9962 + 272 = 10234"

    node *d = add2no2(a,b);
    printList(d);
}
