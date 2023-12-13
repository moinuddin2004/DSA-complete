#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Book
{
    int bookID;
    string title;
    string author;
    Book *next;
    Book *prev;
};

Book *createNewNode(int id, const string &title, const string &author)
{
    Book *newEntry = new Book;
    newEntry->bookID = id;
    newEntry->title = title;
    newEntry->author = author;
    newEntry->next = nullptr;
    newEntry->prev = nullptr;
    return newEntry;
}

void addNewEntry(Book **head, int id, const string &title, const string &author)
{
    Book *newEntry = createNewNode(id, title, author);
    if (*head == nullptr)
    {
        *head = newEntry;
        return;
    }
    Book *temp = *head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newEntry;
    newEntry->prev = temp;
}

void removeEntry(Book **head, int id)
{
    Book *temp = *head;
    while (temp != nullptr)
    {
        if (temp->bookID == id)
        {
            if (temp->prev != nullptr)
            {
                temp->prev->next = temp->next;
            }
            else
            {
                *head = temp->next;
            }
            if (temp->next != nullptr)
            {
                temp->next->prev = temp->prev;
            }
            delete temp;
            cout << "Entry with ID " << id << " has been removed.\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Entry with ID " << id << " not found.\n";
}

void updateEntry(Book *head, int id, const string &newTitle, const string &newAuthor)
{
    while (head != nullptr)
    {
        if (head->bookID == id)
        {
            head->title = newTitle;
            head->author = newAuthor;
            cout << "Entry with ID " << id << " has been updated.\n";
            return;
        }
        head = head->next;
    }
    cout << "Entry with ID " << id << " not found.\n";
}

void searchEntry(Book *head, int id)
{
    while (head != nullptr)
    {
        if (head->bookID == id)
        {
            cout << "Book ID: " << head->bookID << "\nTitle: " << head->title << "\nAuthor: " << head->author << endl;
            return;
        }
        head = head->next;
    }
    cout << "Entry with ID " << id << " not found.\n";
}

int countEntries(Book *head)
{
    int count = 0;
    while (head != nullptr)
    {
        count++;
        head = head->next;
    }
    return count;
}

void displayAllForward(Book *head)
{
    cout << "All Entries (Forward):\n";
    while (head != nullptr)
    {
        cout << "Book ID: " << head->bookID << "\nTitle: " << head->title << "\nAuthor: " << head->author << "\n\n";
        head = head->next;
    }
}

void displayAllBackward(Book *head)
{
    if (head == nullptr)
    {
        return;
    }
    while (head->next != nullptr)
    {
        head = head->next;
    }
    cout << "All Entries (Backward):\n";
    while (head != nullptr)
    {
        cout << "Book ID: " << head->bookID << "\nTitle: " << head->title << "\nAuthor: " << head->author << "\n\n";
        head = head->prev;
    }
}

void saveDataToFile(Book *head, const string &filename)
{
    ofstream file(filename);
    if (file.is_open())
    {
        while (head != nullptr)
        {
            file << head->bookID << "," << head->title << "," << head->author << "\n";
            head = head->next;
        }
        file.close();
        cout << "Data has been saved to " << filename << " successfully.\n";
    }
    else
    {
        cout << "Unable to open the file " << filename << " for writing.\n";
    }
}

int main()
{
    Book *head = nullptr;
    int choice, id;
    string title, author;
    const string filename = "book_records.txt";
    do
    {
        cout << "\nBook Record System Menu\n";
        cout << "1. Add an Entry\n";
        cout << "2. Remove an Entry\n";
        cout << "3. Update an Entry\n";
        cout << "4. Search for an Entry\n";
        cout << "5. Count Total Number of Entries\n";
        cout << "6. Display All Entries (Forward)\n";
        cout << "7. Display All Entries (Backward)\n";
        cout << "8. Save Entries to File\n";
        cout << "9. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, title);
            cout << "Enter Book Author: ";
            getline(cin, author);
            addNewEntry(&head, id, title, author);
            cout << "Entry added successfully.\n";
            break;
        case 2:
            cout << "Enter Book ID to remove: ";
            cin >> id;
            removeEntry(&head, id);
            break;
        case 3:
            cout << "Enter Book ID to update: ";
            cin >> id;
            cout << "Enter New Title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter New Author: ";
            getline(cin, author);
            updateEntry(head, id, title, author);
            break;
        case 4:
            cout << "Enter Book ID to search: ";
            cin >> id;
            searchEntry(head, id);
            break;
        case 5:
            cout << "Total Number of Entries: " << countEntries(head) << endl;
            break;
        case 6:
            displayAllForward(head);
            break;
        case 7:
            displayAllBackward(head);
            break;
        case 8:
            saveDataToFile(head, filename);
            break;
        case 9:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 9);
    return 0;
}
