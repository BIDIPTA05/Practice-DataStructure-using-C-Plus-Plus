#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = NULL;
    }

    head = n;
}

void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteAtHead(node *&head)
{
    node *temp = head;
    head = head->next;
    head->prev = NULL;

    delete temp;
}

void deleteAtAny(node *&head, int pos)
{
    node *temp = head;
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }

    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

int length(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int diff = 0;
    node *ptr1;
    node *ptr2;

    if (l1 > l2)
    {
        diff = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        diff = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (diff--)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {

        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    display(head1);
    display(head2);
    intersect(head1, head2, 3);
    display(head1);
    display(head2);

    cout << intersection(head1, head2) << endl;

    return 0;
}