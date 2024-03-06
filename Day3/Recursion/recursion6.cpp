// reverse a given array


// Solution 1: Using an extra array.

// Time Complexity: O(n), single-pass for reversing array.
// Space Complexity: O(n), for the extra array used.
#include <iostream>
using namespace std;
//Function to print array
void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}
//Function to reverse array using an auxiliary array
void reverseArray(int arr[], int n) {
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printArray(ans, n);
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}



// Solution 2: Space-optimized iterative method
// Approach: Unlike the previous method we use the same array to obtain the result. Follow the steps below.
    // Keep a pointer p1  at the first index and another p2 at the last index of the array. 
    // Swap the elements pointed by p1 and p2, Post swapping increment p1 and decrement p2.
    // This process is repeated for only the first n/2 elements where n is the length of array.
// Note: Swapping all the n elements instead of n/2 elements leaves the array unaltered.


// Time Complexity: O(n), single-pass involved.
// Space Complexity: O(1) 

#include <iostream>

using namespace std;
//Function to print array
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Function to reverse array 
void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   reverseArray(arr, n);
   return 0;
}


// Solution 3: Recursive method
// Approach: The recursive method has an approach almost similar to the iterative one. The approach has been broken down into some steps for simplicity.
    // Create a function that takes an array, start index, and end index of the array as parameters.
    // Swap the elements present  at the start and end index, 
    // The portion of the array left to be reversed is arr[start+1,end-1]. Make a recursive call to reverse the rest of the array. While calling recursion pass start +1  and ends – 1 as parameters for the shrunk array. Repeat step 2.
    // Continue recursion as long as the ‘start < end’ condition is satisfied. This is the base case for our recursion.


// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>

using namespace std;
//Function to print array
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Function to reverse array using recursion
void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   reverseArray(arr, 0, n - 1);
   printArray(arr, n);
   return 0;
}


// Solution 4: Using library function (New Approach)

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include<algorithm>
using namespace std;
//Function to print array
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Reverse array using library function
void reverseArray(int arr[], int n) {
   //Reversing elements from index 0 to n-1 
   reverse(arr, arr + n);
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   reverseArray(arr, n);
   printArray(arr, n);
   return 0;
}

