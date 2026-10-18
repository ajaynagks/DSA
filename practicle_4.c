#include <stdio.h>
// Function for Linear Search
int linearSearch(int arr[], int n, int key) {
 // Loop through the array
 for (int i = 0; i < n; i++) {
 // If element is found, return its index
 if (arr[i] == key) {
 return i;
 }
 } 
 // If not found, return -1
 return -1;
}
// Function for Binary Search (works only on sorted arrays)
int binarySearch(int arr[], int n, int key) {
 int low = 0, high = n - 1; // set search range
 while (low <= high) {
 int mid = (low + high) / 2; // find middle element
 if (arr[mid] == key) {
 return mid; // element found
 }
 else if (arr[mid] < key) {
 low = mid + 1; // search right half
 }
 else {
 high = mid - 1; // search left half
 }
 }
 return -1; // element not found
}
int main() {
 int n, key, choice, result;
 // Input number of elements
 printf("I am Ajay Nag K S(8105)");
 printf("Enter number of elements: ");
 scanf("%d", &n);
 int arr[n]; // declare array of size n
 // Input array elements
 printf("Enter %d elements (sorted for Binary Search):\n", n);
 for (int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 // Input element to search
 printf("Enter element to search: ");
 scanf("%d", &key);
 // Give user option to choose search method
 printf("\nChoose search method:\n");
 printf("1. Linear Search\n");
 printf("2. Binary Search\n");
 scanf("%d", &choice);
 // Use switch-case for choice
 switch (choice) {
 case 1:
 // Call linear search function
 result = linearSearch(arr, n, key);
 if (result != -1)
 printf("Element found at position %d (index %d)\n", result + 1, result);
 else
 printf("Element not found!\n");
 break;
 case 2:
 // Call binary search function
 result = binarySearch(arr, n, key);
 if (result != -1)
 printf("Element found at position %d (index %d)\n", result + 1, result);
 else
 printf("Element not found!\n");
 break;
 default:
 printf("Invalid choice!\n");
 }
 return 0;
}