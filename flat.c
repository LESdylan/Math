#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// Function to merge arrays into a flat list
int *flat(int *list, ...)
{
    va_list args;
    va_start(args, list);

    // First pass: Calculate the total size of the merged array
    size_t total_size = 0;
    int *current_array = list;

    while (current_array != NULL) {
        size_t current_size = va_arg(args, size_t); // Get the size of the current array
        total_size += current_size;
        current_array = va_arg(args, int *);       // Move to the next array
    }

    // Allocate memory for the final merged array
    int *result = (int *)malloc(total_size * sizeof(int));
    if (!result) {
        perror("Failed to allocate memory");
        va_end(args);
        return NULL;
    }

    // Second pass: Copy elements into the result array
    va_end(args);
    va_start(args, list);
    current_array = list;

    size_t offset = 0;
    while (current_array != NULL) {
        size_t current_size = va_arg(args, size_t); // Get the size of the current array
        for (size_t i = 0; i < current_size; i++) {
            result[offset++] = current_array[i];
        }
        current_array = va_arg(args, int *);       // Move to the next array
    }

    va_end(args);
    return result;
}
int main()
{
    // Example input arrays
    int list1[] = {1, 2, 3};
    int list2[] = {4, 5, 6, 7};
    int list3[] = {8, 9};
    int list4[] = {1211, 211, 68484};

    // Merge arrays using a sentinel (NULL)
    size_t total_size = 0; // Variable to store the total size
    int *result = flat(list1, 3, list2, 4, list3, 2, list4, 3, NULL); // Sentinel value

    // Calculate the total size for dynamic printing
    total_size = 3 + 4 + 2 + 3; // Sizes of list1, list2, list3, list4

    // Print the merged array
    if (result) {
        printf("Merged array: ");
        for (size_t i = 0; i < total_size; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result); // Free allocated memory
    }

    return 0;
}
