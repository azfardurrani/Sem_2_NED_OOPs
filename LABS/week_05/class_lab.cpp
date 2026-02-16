
// //question no 1
// #include <iostream>
// using namespace std;

// // function to swap values using pointers
// void swap(int* a, int* b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x, y;

//     cout << "Enter x : ";
//     cin >> x;

//     cout << "Enter y : ";
//     cin >> y;

//     cout << "\nBefore swapping:\n";
//     cout << "x = " << x << ", y = " << y << endl;

//     swap(&x, &y);

//     cout << "\nAfter swapping:\n";
//     cout << "x = " << x << ", y = " << y << endl;

//     return 0;
// }
//Question no 2
#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int temp;
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n; 

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray before reversing:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverseArray(arr, n);

    cout << "\n\nArray after reversing:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
 
//question 3
// #include <stdio.h>

// // function that returns pointer to maximum element
// #include <iostream>
// using namespace std;

// int* findMax(int* arr, int size) {
//     int* max = arr;   // pointer to first element

//     for (int i = 1; i < size; i++) {
//         if (*(arr + i) > *max) {
//             max = arr + i;
//         }
//     }
//     return max;
// }

// int main() {
//     int arr[100], n;
//     int* maxPtr;

//     cout << "Enter number of elements: ";
//     cin >> n;
//     cout << "Enter " << n << " elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     maxPtr = findMax(arr, n);

//     cout << "\nMaximum value: " << *maxPtr << endl;
//     cout << "Address of maximum element: " << maxPtr << endl;

//     return 0;
// }





//question 4
// #include <iostream>
// using namespace std;

// int removeDuplicates(int arr[], int n) {
//     if (n == 0 || n == 1) return n;

//     int newSize = 0; 

//     for (int i = 0; i < n; i++) {
//         bool isDuplicate = false;
//         for (int j = 0; j < newSize; j++) {
//             if (arr[i] == arr[j]) {
//                 isDuplicate = true;
//                 break;
//             }
//         }
//         if (!isDuplicate) {
//             arr[newSize] = arr[i];
//             newSize++;
//         }
//     }
//     return newSize;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " integers:\n";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     n = removeDuplicates(arr, n);

//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

//question 5
// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isPalindrome(const char* str) {
//     const char* start = str;
//     const char* end = str + strlen(str) - 1;

//     while (start < end) {
//         if (*start != *end)
//             return false;
//         start++;
//         end--;
//     }
//     return true;
// }

// int main() {
//     char str[100];
//     cout << "Enter a string: ";
//     cin >> str;

//     if (isPalindrome(str))
//         cout << "\"" << str << "\" is a palindrome.\n";
//     else
//         cout << "\"" << str << "\" is not a palindrome.\n";

//     return 0;
// }
















