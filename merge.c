#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }
}


#include <stdio.h>

void unionSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            result[k++] = arr2[j++];
        } else {
            result[k++] = arr1[i++];
            j++;
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }
}


#include <stdio.h>

void intersectionSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            result[k++] = arr1[i++];
            j++;
        }
    }
}


#include <stdio.h>

void setDifferenceSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            i++;
            j++;
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }
}


int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergeResult[size1 + size2];
    mergeSortedArrays(arr1, size1, arr2, size2, mergeResult);
    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergeResult[i]);
    }
    printf("\n");

    int unionResult[size1 + size2];
    unionSortedArrays(arr1, size1, arr2, size2, unionResult);
    printf("Union of Arrays: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", unionResult[i]);
    }
    printf("\n");

    int intersectionResult[size1 < size2 ? size1 : size2];
    intersectionSortedArrays(arr1, size1, arr2, size2, intersectionResult);
    printf("Intersection of Arrays: ");
    for (int i = 0; i < size1 && i < size2; i++) {
        printf("%d ", intersectionResult[i]);
    }
    printf("\n");

    int setDifferenceResult[size1];
    setDifferenceSortedArrays(arr1, size1, arr2, size2, setDifferenceResult);
    printf("Set Difference (arr1 - arr2): ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", setDifferenceResult[i]);
    }
    printf("\n");

    return 0;
}
