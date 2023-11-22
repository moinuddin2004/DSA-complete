#include <iostream>
using namespace std;

// Define the Node structure outside of the main function
struct Node
{
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
    temp->data = val;
    temp->next = NULL;
    last->next = temp;
}

// Function to insert a node at the head of the linked list
void insertAtStart(Node *&head, int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = head;
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
    temp->data = val;
    temp->next = NULL;

    Node *temp2 = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}

// Function to delete a node from a given position
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
        head = head->next;
        free(temp);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1; ++i)
    {
        temp = temp->next;
    }

    Node *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
}

// Function to search for a value in the linked list
void search(Node *head, int val)
{
    int count = 1;
    while (head !=NULL)
    {
        if (head->data == val)
        {
            cout << "found" << endl;
            cout << "position is " << count << endl;
            return;
        }
        count++;
        head = head->next;
    }
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
    search(head, 66);

    return 0;
}
