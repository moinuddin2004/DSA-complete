#include <iostream>
using namespace std;
struct Node
{
    Node *prev;
    int data;
    Node *next;
};

// Function to insert a node at the tail of the linked list
void insertAtTail(Node *&head, int val)
{
    Node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    Node *temp = new Node();
    temp->prev = last;
    temp->data = val;
    temp->next = NULL;
    last->next = temp;
}
// Function to insert a node at the head of the linked list
void insertAtStart(Node *&head, int val)
{
    Node *temp = new Node();
    temp->prev = NULL;
    temp->data = val;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;
}

// Function to insert a node at a given position
void insertAtPosition(Node *&head, int val, int pos)
{

    if (pos == 1)
    {
        insertAtStart(head, val);
        return;
    }

    Node *temp = new Node();
    temp->prev = NULL;
    temp->data = val;
    temp->next = NULL;

    Node *last = head;
    for (int i = 1; i < pos - 1; i++)
    {
        last = last->next;
    }
    
    last->next->prev = temp;
    temp->next = last->next;
    last->next = temp;
    temp->prev = last;
}

// Function to delete a node from the linked list
void del(Node *&head, int pos)
{
    if (head == nullptr)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    if (pos == 1)
    {
        Node *temp = head;
        head->next->prev = NULL;
        head = head->next;
        free(temp);
        return;
    }

    Node *last = head;
    for (int i = 1; i < pos - 1; ++i)
    {
        last = last->next;
    }

    Node *delNode = last->next;
    last->next = delNode->next;
    if (delNode->next != nullptr)
    {
        delNode->next->prev = last;
    }
    delNode->prev = NULL;
    delNode->next = NULL;
    delete delNode;
}

// Function to display the linked list
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Initialize the head pointer
    Node *head = NULL;

    // Create the first node
    Node *temp = new Node();
    temp->prev = NULL;
    temp->data = 2;
    temp->next = NULL;
    head = temp;

    // Insert a node at the head
    insertAtStart(head, 1);
    // Insert a node at the tail
    insertAtTail(head, 3);
    display(head);

    insertAtPosition(head, 66, 3);
    // Display the linked list
    display(head);
    del(head, 4);
    display(head);

    return 0;
}