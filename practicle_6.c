#include <stdio.h>
#define MAX 5   // maximum size of queue

int queue[MAX];
int front = -1, rear = -1;

// Function to check if queue is empty
int isEmpty() {
    return (front == -1 && rear == -1);
}

// Function to check if queue is full
int isFull() {
    return (rear == MAX - 1);
}

// Function to insert an element
void insert(int val) {
    if (isFull()) {
        printf("Queue is FULL!\n");
    } else {
        if (front == -1) front = 0; // first insertion
        rear++;
        queue[rear] = val;
        printf("%d inserted into queue.\n", val);
    }
}

// Function to delete an element
void dequeue() {   // <-- renamed from delete()
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
    } else {
        printf("%d deleted from queue.\n", queue[front]);
        if (front == rear) {
            // queue becomes empty after deletion
            front = rear = -1;
        } else {
            front++;
        }
    }
}

// Function to display queue
void display() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, val;
    do {
        printf("\n--- Queue Menu ---\n");
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
                dequeue();   // <-- updated call
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
