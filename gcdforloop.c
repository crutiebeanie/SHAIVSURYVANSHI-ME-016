#include <stdio.h>

int gcd(int a, int b) {
    for (int temp; b != 0; ) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2)

    printf("The GCD is %d\n", gcd(num1, num2));

    return 0;
}
