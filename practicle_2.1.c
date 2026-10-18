//Bubble Sort
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            
            if ((ascending && arr[j] > arr[j + 1]) ||
                (!ascending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;
    printf("My name is Ajay Nag K S. Enroll:8105\n");
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    int choice;
    printf("Enter 1 for Ascending order, 0 for Descending order: ");
    if (scanf("%d", &choice) != 1 || (choice != 0 && choice != 1)) {
        printf("Invalid choice. Please enter 1 or 0.\n");
        return 1;
    }

    bubbleSort(arr, n, choice);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
