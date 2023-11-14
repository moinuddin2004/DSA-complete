// #include <iostream>
// using namespace std;
// int main()
// {
//     const int size = 5;
//     double miles[size];
//     double gallons[size];
//     double milespergallon[size];

//     for (int i = 0; i < size; ++i)
//     {
//         cout << "Enter miles for element " << i + 1 << ": ";
//         cin >> miles[i];
//         cout << "Enter gallons for element " << i + 1 << ": ";
//         cin >> gallons[i];
//         if (gallons[i] == 0)
//         {
//             cerr << "Error: Division by zero. Please enter a non-zero value for gallons." << endl;
//             return 1;
//         }
//     }

//     for (int i = 0; i < size; ++i)
//     {
//         double *miles_ptr = &miles[i];
//         double *gallons_ptr = &gallons[i];
//         double *mpg_ptr = &milespergallon[i];
//         *mpg_ptr = *miles_ptr / *gallons_ptr;
//     }
//     cout << "Miles per Gallon:\n";
//     for (int i = 0; i < size; ++i)
//     {
//         double *mpg_ptr = &milespergallon[i];
//         cout << "Element " << i + 1 << ": " << *mpg_ptr << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// double *calculateGrossSalary(double *basicSalary, double *allowances)
// {
//     double *grossSalary = new double;

//     *grossSalary = *basicSalary + *allowances;

//     return grossSalary;
// }

// int main()
// {
//     double basic = 3000.0;
//     double allowance = 500.0;

//     double *totalSalaryPtr = calculateGrossSalary(&basic, &allowance);

//     cout << "Gross Salary: " << *totalSalaryPtr << std::endl;

//     delete totalSalaryPtr;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reverseArray(int *arr, int size)
// {
//     int *start = arr;
//     int *end = arr + size - 1;

//     while (start < end)
//     {
//         swap(*start, *end);
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     const int size = 5;
//     int arr[size] = {1, 2, 3, 4, 5};

//     cout << "Original Array: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     reverseArray(arr, size);

//     cout << "Reversed Array: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void copyArray(double *source, double *destination, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         *(destination + i) = *(source + i);
//     }
// }

// int main()
// {
//     const int size = 5;
//     double sourceArray[size] = {1.1, 2.2, 3.3, 4.4, 5.5};
//     double destinationArray[size];

//     copyArray(sourceArray, destinationArray, size);

//     cout << "Source Array: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << sourceArray[i] << " ";
//     }
//     cout << endl;

//     cout << "Copied Array: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << destinationArray[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int *searchForInteger(int *arr, int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (*arr == target)
//         {
//             return arr;
//         }
//         arr++;
//     }
//     return nullptr;
// }

// int main()
// {
//     const int size = 5;
//     int arr[size] = {1, 2, 3, 4, 5};
//     int target = 8;

//     int *result = searchForInteger(arr, size, target);

//     if (result != nullptr)
//     {
//         cout << "Found the target " << target << " at address: " << result << std::endl;
//     }
//     else
//     {
//         cout << "Target " << target << " not found in the array." << std::endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
void sortDescending(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    const int size = 10;
    int arr[size] = {5, 1, 9, 3, 7, 2, 8, 6, 4, 10};

    sortDescending(arr, size);

    cout << "Sorted Array in Descending Order: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr; 
//     cout << "Element at index 0: " << *ptr << endl;
//     ptr++; 
//     cout << "Element at index 1: " << *ptr << endl;
//     ptr += 2; 
//     cout << "Element at index 3: " << *ptr << endl;

//     return 0;
// }
