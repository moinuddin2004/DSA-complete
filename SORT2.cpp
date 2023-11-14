#include <iostream>
using namespace std;

// QUICK SORT
// int partition(int arr[], int start, int end)
// {
//     int pivot = arr[end];
//     int pindex = start;
//     for (int i = 0; i < end; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             swap(arr[i], arr[pindex]);
//             pindex = pindex + 1;
//         }
//     }
//     swap(arr[pindex], arr[end]);
//     return pindex;
// }
// void QuickSort(int arr[], int start, int end)
// {
//     if (start < end)
//     {
//         int pindex = partition(arr, start, end);
//         QuickSort(arr, start, pindex - 1);
//         QuickSort(arr, pindex + 1, end);
//     }
// }

// MERGE SORT
// void Merge(int left[], int right[], int arr[], int lengthleft, int lengthright)
// {
//     int i = 0, j = 0, k = 0;
//     while (i < lengthleft && j < lengthright)
//     {
//         if (left[i] <= right[j])
//         {
//             arr[k] = left[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = right[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < lengthleft)
//     {
//         arr[k] = left[i];
//         i++;
//         k++;
//     }
//     while (j < lengthright)
//     {
//         arr[k] = right[j];
//         j++;
//         k++;
//     }
// }

// void MergeSort(int arr[], int n)
// {
//     if (n < 2)
//     {
//         return;
//     }
//     int mid = n / 2;
//     int lengthleft = mid;
//     int lengthright = n - mid;
//     int left[lengthleft];
//     int right[lengthright];

//     for (int i = 0; i < mid; i++)
//     {
//         left[i] = arr[i];
//     }
//     for (int i = mid; i < n; i++)
//     {
//         right[i - mid] = arr[i];
//     }
//     MergeSort(left, lengthleft);
//     MergeSort(right, lengthright);
//     Merge(left, right, arr, lengthleft, lengthright);
// }

int main()
{
    int arr[] = {9, 3, 1, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array

    // SELECTION SORT 
    // int temp, loc;
    // for (int i = 0; i < 5 - 1; i++)
    // {
    //     // int min = arr[i];
    //     // loc=i;
    //     int minindex = i;
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[j] < arr[minindex])
    //         {
    //             minindex = j;
    //             //   loc = j;
    //         }
    //     }
    //     
    //     temp = arr[i];
    //     arr[i] = arr[minindex];
    //     arr[minindex] = temp;
    // }

    // BUBBLE SORT
    // for (int i = 0; i < 5 - 1; i++)
    // {
    //     bool swapp = false;
    //     for (int j = 0; j < (5 - i) - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j + 1], arr[j]);
    //             swapp = true;
    //         }
    //     }
    //     if (swapp == false)
    //     {
    //         break;
    //     }
    // }

    // INSERTION SORT
    // for (int i = 1; i < 5; i++)
    // {
    //     int temp = arr[i];
    //     int j = i - 1;
    //     while (j >= 0 && arr[j] > temp)
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = temp;
    // }

    // QUICK SORT
    // QuickSort(arr, 0, 4);

    // MERGE SORT
    // MergeSort(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}