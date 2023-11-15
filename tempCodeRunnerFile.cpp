#include <iostream>
using namespace std;

// Binary Search Algorithm
int binary_search(int array[], int size, int item)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == item)
        {
            return mid + 1; 
        }
        else if (array[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    
    return low + 1; 
}

// Insertion Algorithm
void insertion(int array[], int &size, int item, int loc)
{
    for (int i = size; i > loc - 1; --i)
    {
        array[i] = array[i - 1];
    }

    array[loc - 1] = item;
    ++size;
}

int main()
{
    
    int array[] = {1, 2, 4, 5, 7, 9, 10, 12, 15, 18};
    int size = sizeof(array) / sizeof(array[0]);

   
    int item_to_find = 7;
    int result = binary_search(array, size, item_to_find);
    cout << "Binary Search: Item " << item_to_find << " found at position " << result << "." << endl;

  
    int item = 8;
    int loc = binary_search(array, size, item);
    insertion(array, size, item, loc);

    cout << "Insertion: Item " << item << " inserted at position " << loc << "." << endl;

   
    cout << "Updated Array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
