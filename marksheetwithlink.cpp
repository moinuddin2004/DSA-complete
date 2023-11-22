#include <iostream>
using namespace std;

// Structure to store student details
struct Student
{
    string name;
    int rollNo;
    int marks;
    Student *next;
};

// Function to insert a student's details at the end of the linked list
void insertAtEnd(Student *&head, string name, int rollNo, int marks)
{
    Student *temp = new Student();
    temp->name = name;
    temp->rollNo = rollNo;
    temp->marks = marks;
    temp->next = nullptr;

    if (head == nullptr)
    {
        head = temp;
        return;
    }

    Student *last = head;
    while (last->next != nullptr)
    {
        last = last->next;
    }
    last->next = temp;
}

// Function to delete a student's details from the end of the linked list
void deleteFromEnd(Student *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    if (head->next == nullptr)
    {
        delete head;
        cout << "Student deleted successfully" << endl;
        head = nullptr;
        return;
    }

    Student *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    cout<<"Student deleted successfully"<<endl;
    temp->next = nullptr;
}

// Function to search for a student's details by roll number
void searchByRollNumber(Student *head, int rollNo)
{
    while (head != nullptr)
    {
        if (head->rollNo == rollNo)
        {
            cout << "Student found!" << endl;
            cout << "Name: " << head->name << endl;
            cout << "Roll Number: " << head->rollNo << endl;
            cout << "Marks: " << head->marks << endl;
            return;
        }
        head = head->next;
    }
    cout << "Student not found." << endl;
}

// Function to display the mark sheet
void displayMarkSheet(Student *head)
{
    if (head == nullptr)
    {
        cout << "Mark sheet is empty." << endl;
        return;
    }

    cout << "Mark Sheet: " << endl;
    while (head != nullptr)
    {
        cout << "Name: " << head->name << ", Roll Number: " << head->rollNo << ", Marks: " << head->marks << endl;
        head = head->next;
    }
}

// Function to check if the mark sheet is empty
bool isMarkSheetEmpty(Student *head)
{
    return head == nullptr;
}

int main()
{
    Student *markSheet = nullptr;
    int choice, rollNo, marks;
    string name;

    do
    {
        cout << "\nMark Sheet Program\n";
        cout << "1. Insert student details\n";
        cout << "2. Delete student details\n";
        cout << "3. Search student by roll number\n";
        cout << "4. Display Mark Sheet\n";
        cout << "5. Is Mark Sheet Empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter student roll number: ";
            cin >> rollNo;
            cout << "Enter marks: ";
            cin >> marks;
            insertAtEnd(markSheet, name, rollNo, marks);
            break;
        case 2:
            deleteFromEnd(markSheet);
            break;
        case 3:
            cout << "Enter roll number to search: ";
            cin >> rollNo;
            searchByRollNumber(markSheet, rollNo);
            break;
        case 4:
            displayMarkSheet(markSheet);
            break;
        case 5:
            if (isMarkSheetEmpty(markSheet))
                cout << "Mark sheet is empty." << endl;
            else
                cout << "Mark sheet is not empty." << endl;
            break;
        case 6:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
            break;
        }
    } while (choice != 6);

    return 0;
}
