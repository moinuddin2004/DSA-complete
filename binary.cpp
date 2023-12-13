#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s+e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int key = 5;

    int f = binarySearch(arr, n, key);
    if (f != -1)
    {
        cout << "Element found at index: " << f << endl;
        cout << "Element value: " << arr[f] << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}