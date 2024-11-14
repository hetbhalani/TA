//29. WAP to count numbers higher than average of an array.

#include <stdio.h>

void main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    float average = (float)sum / n;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > average) {
            count++;
        }
    }

    printf("Average: %.2f\n", average);
    printf("numbers higher than average: %d", count);
}
