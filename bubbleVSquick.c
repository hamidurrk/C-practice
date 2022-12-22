#include <stdio.h>

int quickSortSwaps = 0;
int bubbleSortSwaps = 0;

void quickSort(int array[], int left, int right) {
    if (left >= right) {
        return;
    }

    int pivot = array[(left + right) / 2];
    int index = partition(array, left, right, pivot);
    quickSort(array, left, index - 1);
    quickSort(array, index, right);
}

int partition(int array[], int left, int right, int pivot) {
    while (left <= right) {
        while (array[left] < pivot) {
            left++;
        }
        while (array[right] > pivot) {
            right--;
        }
        if (left <= right) {
            int temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            quickSortSwaps++;
            left++;
            right--;
        }
    }
    return left;
}

void bubbleSort(int array[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                bubbleSortSwaps++;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    int array2[n];
    for (int i = 0; i < n; i++) {
        array2[i] = array[i];
    }

    quickSort(array, 0, n - 1);
    printf("Number of swaps for quick sort: %d\n", quickSortSwaps);

    bubbleSort(array2, n);
    printf("Number of swaps for bubble sort: %d\n", bubbleSortSwaps);

    return 0;
}
