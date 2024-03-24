#include <stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
    }}
  swap(&arr[i + 1], &arr[high]); 
  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
    int p = partition(array, low, high);
    quickSort(array, low, p - 1); // left of pivot
    quickSort(array, p + 1, high); //right of pivot
  }
}
void main(){
    int a[100],n,i;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<=n-1;i++)
      scanf("%d",&a[i]);
    quickSort(a,0,n-1);
    printf("Sorted array: ");
    for (i=0; i<n; ++i) {
      printf("%d ", a[i]);
    }
    printf("\n");
}

/* output:
Enter no of elements: 5
Enter the elements: 34 2 56 7 1
Sorted array: 1 2 7 34 56             */
