#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newSize = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        
        if (!isDuplicate) {
            arr[newSize++] = arr[i];
        }
    }

   
    printf("Array after removing duplicates: \n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
