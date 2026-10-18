#include <stdio.h>

#define MAX 5   // Maximum size of the stack

int stack[MAX]; // Array to implement stack
int top = -1;  // Initially stack is empty

// Function to check if stack is empty
int isEmpty()
{
    return (top == -1);
}

// Function to check if stack is full
int isFull()
{
    return (top == MAX - 1);
}

// Function to push an element to the stack
void push(int value)
{
    if (isFull())
    {
        printf("\nStack Overflow! Cannot push %d to the stack\n", value);
    }
    else
    {
        top++;
        stack[top] = value;
        printf("\n%d pushed into stack\n", value);
    }
}

// Function to pop an element from the stack
void pop()
{
    if (isEmpty())
    {
        printf("\nStack Underflow! Cannot pop from stack\n");
    }
    else
    {
        printf("\n%d popped from stack\n", stack[top]);
        top--;
    }
}

// Function to display the elements of the stack
void display()
{
    if (isEmpty())
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nStack elements are:\n");

        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }

        printf("\n");
    }
}

// Main function with Menu
int main()
{
    int choice, value;

    printf("====================================\n");
    printf("       STACK IMPLEMENTATION\n");
    printf("====================================\n");
    printf("My Name is Omkar Gururaj Bondade\n");
    printf("Enrollment No: 92500118076\n");

    do
    {
        printf("\n----- Stack Menu -----\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. isEmpty\n");
        printf("5. isFull\n");
        printf("6. EXIT\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                if (isEmpty())
                {
                    printf("\nStack is Empty\n");
                }
                else
                {
                    printf("\nStack is NOT empty\n");
                }
                break;

            case 5:
                if (isFull())
                {
                    printf("\nStack is Full\n");
                }
                else
                {
                    printf("\nStack is NOT Full\n");
                }
                break;

            case 6:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}