
#include <stdio.h>
#include <stdlib.h>

// Function to calculate the mean of an array
float calculate_mean(int marks[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}

// Function to calculate the median of an array
float calculate_median(int marks[], int n) {
    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (marks[j] > marks[j + 1]) {
                // Swap marks[j] and marks[j + 1]
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Calculate the median
    if (n % 2 == 0) {
        return (float)(marks[n / 2 - 1] + marks[n / 2]) / 2.0;
    } else {
        return (float)marks[n / 2];
    }
}

int main() {
    int marks[100]; // Assuming a maximum of 100 marks
    int n = 0;

    while (1) {
        float mark;
        printf("Enter a mark (or any non-numeric value to stop): ");
        if (scanf("%f", &mark) != 1) {
            break;
        }

        marks[n] = (int)mark;
        n++;

        float mean = calculate_mean(marks, n);
        float median = calculate_median(marks, n);

        printf("Mean: %.2f, Median: %.2f\n", mean, median);

        if (mean >= median) {
            printf("Student is qualified.\n");
        } else {
            printf("Student is not qualified.\n");
        }
    }

    return 0;
}




