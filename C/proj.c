#include <stdio.h>

// Function for square star pattern
void squarePattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function for right triangle pattern
void rightTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function for number pattern
void numberPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int choice, n;

    printf("----- Pattern Logic Tool -----\n");
    printf("1. Square Star Pattern\n");
    printf("2. Right Triangle Star Pattern\n");
    printf("3. Number Pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter size: ");
    scanf("%d", &n);

    switch(choice) {
        case 1:
            squarePattern(n);
            break;
        case 2:
            rightTriangle(n);
            break;
        case 3:
            numberPattern(n);
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}