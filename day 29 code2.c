/*Find the maximum and minimum element in an array*/

#include <stdio.h>
#include <limits.h> 

int main() {
    int n, i;


  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array must contain at least one element.\n");
        return 1; 
    }

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_val = arr[0]; 
    int min_val = arr[0]; 

    for (i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i]; 
        }
        if (arr[i] < min_val) {
            min_val = arr[i]; 
        }
    }
    printf("Max=%d, Min=%d\n", max_val, min_val);

    return 0; 
}
