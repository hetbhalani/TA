//28. WAP to find Maximum, Minimum, Sum, and Average of given numbers in an array.

#include <stdio.h>

void main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        printf("Element at %d: ", i);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
        sum += a[i];
    }

    float average = (float)sum / n;

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
}
