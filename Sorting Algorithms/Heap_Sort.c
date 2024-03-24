#include <stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void heapify(int* arr, int n, int i) {
    int largest = i; //root element
    int left = 2*i+1;
    int right  = 2*i+2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i){ //root less than children
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);// again heapify the side without root 
    }
}
void heapSort(int* arr, int n){
    for (int i = n/2-1; i>=0; i--) //max heap
        heapify(arr, n, i);
    for (int i=n-1; i>=0; i--){ // sorting 
        swap(&arr[i], &arr[0]);  // swap the root node and the last leaf node
        heapify(arr, i, 0); // again heapify the max heap from the root 
    }
}
void main(){
    int a[100],n,i;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<=n-1;i++)
      scanf("%d",&a[i]);
    heapSort(a,n);
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
