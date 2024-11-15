#include <stdio.h>
#include <stdlib.h>

#define MAX 100  

struct Stack {
    int arr[MAX];
    int top;
};

void initStack(struct Stack* stack) {
    stack->top = -1;
}

int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack is full!\n");
    } else {
        stack->arr[++(stack->top)] = value;
        printf("%d pushed to stack.\n", value);
    }
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack->arr[(stack->top)--];
    }
}

void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements:\n");
        for (int i = stack->top; i >= 0; i--) {
            printf("%d\n", stack->arr[i]);
        }
    }
}

int main() {
    struct Stack stack;
    initStack(&stack);

    int choice, value, n;

    printf("Enter the number of elements you want to push onto the stack: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        push(&stack, value);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1) {
                    printf("Popped: %d\n", value);
                }
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
