#include <stdio.h>

int a[10];
int top = -1;

void push(int val) {
    if (top == 9) {
        printf("Stack is full\n");
    } else {
        top++;
        a[top] = val;
    }
}

void pop() {
    if (top >= 0) {
        printf("Popped element: %d\n", a[top]);
        top--;
    } else {
        printf("Stack is empty\n");
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d\n", a[i]);
        }
    }
}

int main() {
    int action, value;

    while (1) {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &action);

        switch (action) {
            case 1:
                printf("Enter number: ");
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
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
