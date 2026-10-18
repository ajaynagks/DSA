#include<stdio.h>

int main() {
    int n, choice, val, pos;
    printf("This is Ajay Nag K S Enroll: 8105\n");
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    do{
    printf("Enter your choice(1-4)\n1. Traversal\n2. Insertion\n3. Deletion\n4. Exit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:  // Traversal
            printf("The elements of the array are: \n");
            for(int i=0; i<n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n\n");
            break;
        

        case 2:  // Insertion
            printf("Enter the position for insertion: \n");
            scanf("%d", &pos);
            printf("Enter the value to be inserted: \n");
            scanf("%d", &val);
            for(int i=n; i>=pos; i--) {
                arr[i] = arr[i-1];
            }
            arr[pos-1] = val;
            n++;
            for(int i=0; i<n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n\n");
            break;
        

        case 3:  // Deletion
            printf("Enter the position of the element to be deleted: \n");
            scanf("%d", &pos);
            for(int i=pos-1; i<n; i++) {
                arr[i] = arr[i+1];
            }
            n--;
            for(int i=0; i<n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n\n");
            break;
        

        case 4: 
            printf("Exiting...");
            break;
        

        default: {
            printf("Enter a valid number! (1-4)\n");
            break;
        }
    } 
} while(choice!=4);
    return 0;
} 
