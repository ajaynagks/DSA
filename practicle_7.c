#include <stdio.h>
#define MAX 5   // maximum size of circular queue

int queue[MAX];
int front = -1, rear = -1;

// Function to check if queue is empty
int isEmpty() {
    return (front == -1);
}

// Function to check if queue is full
int isFull() {
    return ((rear + 1) % MAX == front);
}

// Function to insert an element
void insert(int val) {
    if (isFull()) {
        printf("Queue is FULL!\n");
    } else {
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX;
        }
        queue[rear] = val;
        printf("%d inserted into queue.\n", val);
    }
}

// Function to delete an element
void deleteElement() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
    } else {
        printf("%d deleted from queue.\n", queue[front]);
        if (front == rear) {
            // queue becomes empty after deletion
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

// Function to display queue
void display() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    int choice, val;
    printf("Ajay Nag K S(92500118105)");
    do {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Check if Empty\n");
        printf("5. Check if Full\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insert(val);
                break;
            case 2:
                deleteElement();
                break;
            case 3:
                display();
                break;
            case 4:
                if (isEmpty())
                    printf("Queue is EMPTY.\n");
                else
                    printf("Queue is NOT empty.\n");
                break;
            case 5:
                if (isFull())
                    printf("Queue is FULL.\n");
                else
                    printf("Queue is NOT full.\n");
                break;
            case 6:	
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 6);

    return 0;
}
