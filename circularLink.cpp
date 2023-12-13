#include <iostream>
using namespace std;

// Define the Node structure outside of the main function
struct Node
{
    int data;
    Node *next;
};

// Function to insert a node at the head of the linked list
void insertAtStart(Node *&head, int val) {
    Node *temp = new Node();
    temp->data = val;
    temp->next = nullptr;

    if (head == nullptr) {
        temp->next = temp; // Point to itself for an empty list
        head = temp;
        return;
    }

    Node *last = head;
    while (last->next != head) {
        last = last->next;
    }

    last->next = temp;
    temp->next = head;
    head = temp;
}



// Function to insert a node at the tail of the linked list
void insertAtTail(Node *&head, int val)
{
    if(head == NULL){
        insertAtStart(head, val);
        return;
    }

    Node *last = head;
    while (last->next != head)
    {
        last = last->next;
    }

    Node *temp = new Node();
    temp->data = val;
    last->next = temp;
    temp->next = head;
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

// // Function to delete a node from a given position
void del(Node *&head, int pos)
{
    if (head == nullptr)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    if (pos == 1)
    {
    Node *last = head;
    while (last->next != head)
    {
        last = last->next;
    }
        Node *temp = head;
        last->next = temp->next;
        head = head->next;
        delete(temp);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1; ++i)
    {
        temp = temp->next;
    }

    Node *temp2 = temp->next;
    temp->next = temp->next->next;
    delete(temp2);
}

// Function to search for a value in the linked list
void search(Node *head, int val)
{
    int count = 1;
    Node *originalHead = head;
    do
    {
        if (head->data == val)
        {
            cout << "found" << endl;
            cout << "position is " << count << endl;
            return;
        }
        count++;
        head = head->next;
    } while (head != originalHead);
    cout << "Value not found in the list." << endl;
}

// Function to display the linked list
void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    // Initialize the head pointer
    Node *head = nullptr;

    // Create the first node
    insertAtStart(head, 2);
    // Insert a node at the head
    insertAtStart(head, 1);
    // Insert a node at the tail
    insertAtTail(head, 3);
    display(head);

    insertAtPosition(head, 66, 2);
    // Display the linked list
    display(head);
    del(head, 4);
    display(head);
    search(head, 66);

    return 0;
}
