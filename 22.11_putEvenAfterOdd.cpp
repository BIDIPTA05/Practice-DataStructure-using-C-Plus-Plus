#include <bits/stdc++.h>
using namespace std;

class node // Construct Node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void inserAtHead(node *&head, int val) //Insert At Head
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val) //Insert At Tail
{
    node *n = new node(val);

    if (head == 0)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head) //Display Node
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteAtHead(node *&head) //Delete Node at Head
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(node *&head, int val) //Delete Node
{
    if (head == NULL) // if doesn't have any node
    {
        return;
    }
    if (head->next == NULL) //if only single node
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;              // assign head node
    while (temp->next->data != val) //run until deletion node
    {
        temp = temp->next; //temp assign deletion node
    }
    node *todelete = temp->next;   // assign deltion node
    temp->next = temp->next->next; // link to next node from deletion node
    delete todelete;               // delete deletion node
}

void oddAfterEven(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
}

int main() //Main Function
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head, arr[i]);
    }
    display(head);
    oddAfterEven(head);
    display(head);

    return 0;
}