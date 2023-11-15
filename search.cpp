// #include <iostream>
// using namespace std;

// int linear_search(int array[], int size, int item)
// {
//     for (int i = 0; i < size; ++i)
//     {
//         if (array[i] == item)
//         {
//             return i + 1; 
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int array[] = {4, 2, 7, 1, 9, 5};
//     int size = sizeof(array) / sizeof(array[0]);
//     int item = 7;

//     int result = linear_search(array, size, item);

//     if (result != 0)
//     {
//         cout << "Item " << item << " found at position " << result << "." << endl;
//     }
//     else
//     {
//         cout << "Item " << item << " not found in the array." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Binary Search Algorithm
// int binary_search(int array[], int size, int item)
// {
//     int low = 0, high = size - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if (array[mid] == item)
//         {
//             return mid + 1; 
//         }
//         else if (array[mid] < item)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

    
//     return low + 1; 
// }

// // Insertion Algorithm
// void insertion(int array[], int &size, int item, int loc)
// {
//     for (int i = size; i > loc - 1; --i)
//     {
//         array[i] = array[i - 1];
//     }

//     array[loc - 1] = item;
//     ++size;
// }

// int main()
// {
    
//     int array[] = {1, 2, 4, 5, 7, 9, 10, 12, 15, 18};
//     int size = sizeof(array) / sizeof(array[0]);

   
//     int item_to_find = 7;
//     int result = binary_search(array, size, item_to_find);
//     cout << "Binary Search: Item " << item_to_find << " found at position " << result << "." << endl;

  
//     int item = 8;
//     int loc = binary_search(array, size, item);
//     insertion(array, size, item, loc);

//     cout << "Insertion: Item " << item << " inserted at position " << loc << "." << endl;

   
//     cout << "Updated Array: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int binary_search(int array[], int size, int item)
// {
//     int low = 0, high = size - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if (array[mid] == item)
//         {
//             return mid + 1; 
//         }
//         else if (array[mid] < item)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

   
//     return -1;
// }

// int main()
// {
//     int array[] = {11, 22, 33, 36, 45, 52, 57, 60, 64, 78};
//     int size = sizeof(array) / sizeof(array[0]);
//     int n;
//     cout << "enter number" << endl;
//     cin >> n;
//     int item = n;
//     int result1 = binary_search(array, size, item);
//     if (result1 != -1)
//     {
//         cout << "Item " << item << " found at position " << result1 << "." << endl;
//     }
//     else
//     {
//         cout << "Item " << item << " not found in the array." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int binarySearch(int array[], int size, int item)
// {
//     int low = 0, high = size - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if (array[mid] == item)
//         {
//             return mid;
//         }
//         else if (array[mid] < item)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return -1;
// }

// void deleteItem(int array[], int &size, int index)
// {
//     for (int i = index; i < size - 1; ++i)
//     {
//         array[i] = array[i + 1];
//     }
//     --size;
// }

// int main()
// {
//     int array[] = {11, 22, 33, 36, 45, 52, 57, 60, 64, 78};
//     int size = sizeof(array) / sizeof(array[0]);

//     int items[] = {45, 78};

//     for (int i = 0; i < 2; ++i)
//     {
//         int item_to_search = items[i];
//         int result = binarySearch(array, size, item_to_search);

//         if (result != -1)
//         {
//             cout << "Item " << item_to_search << " found at position " << result + 1 << ". Deleting..." << endl;
//             deleteItem(array, size, result);
//         }
//         else
//         {
//             cout << "Item " << item_to_search << " not found in the array." << endl;
//         }
//     }

//     cout << "Updated Array: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
