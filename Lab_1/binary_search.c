#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (array[mid] == x) {
        return mid;
    }
    if (array[mid] < x) {
        low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
    int i, n, ele, a[50];
    printf(">> Enter the number of elements: ");
    scanf("%d",&n);
    printf("> Enter the values:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n>> Enter the element to be searched: ");
    scanf("%d",&ele);
    int result = binarySearch(a, ele, 0, n - 1);
    if (result == -1) {
        printf("\n-- Element not found");
    }
    else {
        printf("\n-- Element is found at index %d, position %d", result, result + 1);
    }
    printf("\n\n");
    return 0;
}
