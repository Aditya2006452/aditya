#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // If divisible by any number other than 1 and itself
    }
    return 1; // The number is prime
}

int main() {
    int start, end;
    FILE *file;

    // Ask user for range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Open file to save prime numbers
    file = fopen("prime_numbers.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    fprintf(file, "Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            fprintf(file, "%d ", i); // Write the prime number to the file
        }
    }

    printf("\nPrime numbers have been saved to 'prime_numbers.txt'.\n");

    fclose(file); // Close the file
    return 0;
}