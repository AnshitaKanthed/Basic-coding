#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;
}


// Optimized approach (Reducing time complexity for the best case):
// The best case occurs if the given array is already sorted. We can reduce the time complexity to O(N) by just adding a small check inside the loops. 

    // We will check in the first iteration if any swap is taking place. If the array is already sorted no swap will occur and we will break out from the loops. 
    // Thus the iteration of the outer loop will be just 1. And our overall time complexity will be O(N).

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;
}
