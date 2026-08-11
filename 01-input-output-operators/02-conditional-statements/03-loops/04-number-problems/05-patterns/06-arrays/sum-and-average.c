#include <stdio.h>
int main() {
    int arr[5];
    int i, sum = 0;
    float average;
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    average = (float)sum / 5;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);
    return 0;
}
