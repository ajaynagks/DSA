//Merge sort:

#include <stdio.h>

// Function to merge two halves
void merge(int arr[], int left, int mid, int right) {
    int i = left;      // Starting index for left subarray
    int j = mid + 1;   // Starting index for right subarray
    int k = 0;         // Index for temporary array
  int temp[right - left + 1]; // Temporary array

    // Merge both halves into temp[]
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } 


else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left subarray
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

   // Copy remaining elements of right subarray
    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temp[] back to arr[]
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}


// Recursive function for merge sort
void mergeSort(int arr[], int left, int right) {
     if (left < right) {
        int mid = (left + right) / 2;  // Find middle point

       



mergeSort(arr, left, mid);     // Sort left half
        mergeSort(arr, mid + 1, right); // Sort right half

        merge(arr, left, mid, right);  // Merge the sorted halves
    }
}

// Main function
int main() {
    printf("My name is Ajay Nag K S (92500118105)\n");
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

