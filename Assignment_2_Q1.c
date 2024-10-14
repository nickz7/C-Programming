#include <stdio.h>

// Global variable to count function calls
int count = 0;

// Function to demonstrate local and global variables
void calculate(int num) {
    // Local variable
    int localResult = num + 10;

    // Increment global counter
    count++;

    printf("Function call %d: Local variable result = %d\n", count, localResult);
}

int main() {
    // Call the function with different numbers
    calculate(5);
    calculate(20);
    calculate(15);

    return 0;
}
