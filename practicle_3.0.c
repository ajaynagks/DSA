//quick sort
#include <stdio.h>

// Function to swap two values
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Quick Sort function
void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivot = a[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (a[j] < pivot) {
                i++;
                swap(&a[i], &a[j]);
            }
        }
        swap(&a[i + 1], &a[high]);

       

 int pi = i + 1;

        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

// Print the array
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
printf("My name is Ajay Nag K S (92500118105)\n");   
int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

   quickSort(arr, 0, n - 1);
printf("Sorted using Quick Sort:\n");
    printArray(arr, n);

    return 0;
}
