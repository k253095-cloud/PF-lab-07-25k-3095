#include <stdio.h>
int main() {
    int arr[10];
    printf("Enter 10 Numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1; 
            }
        }
    }
    
    printf("\nUpdated Numbers (duplicates marked as -1):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

