// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string delname;
//     bool flag = false;

//     string namearr[] = {"moin", "ali", "kabir", "bilal", "nouman", "adnan", "ammar", "eshan", "hamza", "salman"};
//     int size = sizeof(namearr) / sizeof(namearr[0]);
//     for (int i = 0; i < size; i++)
//     {
//         cout << namearr[i] << endl;
//     }

//     cout << "Enter a name you want to delete: ";
//     cin >> delname;

//     for (int i = 0; i < size; i++)
//     {
//         if (namearr[i] == delname)
//         {
//             flag = true;

//             cout << namearr[i] << "  is deleted" << endl;
//         }
//         if (flag && i < size - 1)
//         {
//             namearr[i] = namearr[i + 1];
//         }
//     }

//     if (flag)
//     {
//         size--; // Reduce the size to truncate the array
//     }

//     cout << "Updated array:\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << namearr[i] << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6};

//     int mostRepeatedNum = arr[0];
//     int maxFrequency = 1;

//     for (int i = 0; i < 13; i++)
//     {
//         int currentNum = arr[i];
//         int currentFrequency = 1;

//         for (int j = i + 1; j < 13; j++)
//         {
//             if (arr[j] == currentNum)
//             {
//                 currentFrequency++;
//             }
//         }

//         if (currentFrequency > maxFrequency)
//         {
//             maxFrequency = currentFrequency;
//             mostRepeatedNum = currentNum;
//         }
//     }

//     cout << "The most repeated number is: " << mostRepeatedNum << " (repeated " << maxFrequency << " times)" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter any number" << endl;
//     cin >> num;
//     if (num < 0)
//     {
//         cout << "Negative"
//              << " -1" << endl;
//     }
//     else
//     {
//         cout << "Positive"
//              << " 0" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string delname;
//     bool flag = false;
//     string namearr[] = {"moin", "ali", "kabir", "bilal", "nouman", "adnan", "ammar", "eshan", "hamza", "salman"};

//     for (int i = 0; i < 10; i++)
//     {
//         cout << namearr[i] << endl;
//     }

//     cout << "Enter a name you want to delete: ";
//     cin >> delname;

//     for (int i = 0; i < 10; i++)
//     {
//         if (namearr[i] == delname)
//         {
//             flag = true;
//             cout << namearr[i] << "  is deleted" << endl;
//         }
//         if (flag)
//         {
//             namearr[i] = namearr[i + 1];
//         }
//     }

//     cout << "Updated array:\n";
//     for (int i = 0; i < 9; i++)
//     {
//         cout << namearr[i] << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct student
// {
//     int StdID;
//     string StdName;
//     int StdAge;
   
// };

// int main()
// {
   
//     student s;

//     cout << "Enter Student ID: ";
//     cin >> s.StdID;

//     cin.ignore(); 

//     cout << "Enter Student Name: ";
//     getline(cin, s.StdName);

//     cout << "Enter Student Age: ";
//     cin >> s.StdAge;

//     cout << "\nStudent Information:\n";
//     cout << "Student ID: " << s.StdID << endl;
//     cout << "Student Name: " << s.StdName << endl;
//     cout << "Student Age: " << s.StdAge << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct student
// {
//     int StdID;
//     string StdName;
//     int StdAge;
// };

// int main()
// {

//     student *s = new student;

//     cout << "Enter Student ID: ";
//     cin >> s->StdID;

//     cin.ignore(); 

//     cout << "Enter Student Name: ";
//     getline(cin, s->StdName);

//     cout << "Enter Student Age: ";
//     cin >> s->StdAge;

//     cout << "\nStudent Information:\n";
//     cout << "Student ID: " << s->StdID << endl;
//     cout << "Student Name: " << s->StdName << endl;
//     cout << "Student Age: " << s->StdAge << endl;

//     delete s;

//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "enter 1" << endl;
    cin >> a;
    cout << "enter 2" << endl;
    cin >> b;
    cout << "enter 3" << endl;
    cin >> c;

    if (a < b && a < c)
    {
        cout << "smallest is a" << endl;
    }
    else if (b < c)
    {
        cout << "smallest is b" << endl;
    }
    else
    {
        cout << "smallest is c" << endl;
    }

    return 0;
}


// #include <iostream>

// using namespace std;
// int main()
// {
//     int arr[10];
//     cout << "input" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }

//     // Bubble sorting
//     for (int i; i < 10; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp;
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     cout << "output" << endl;
//     for (int i = 0; i < 10; i++)
//     {

//         cout << arr[i] << "  ";
//     }

//     return 0;
// }