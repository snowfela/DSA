#include <stdio.h>
#include<stdlib.h>
void merge(int a[100],int i1,int j1, int i2,int j2){
    int temp[100], i=i1,j=i2,k=0;
    while(i<=j1&&j<=j2){
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=j1)
        temp[k++]=a[i++];
    while(j<=j2)
        temp[k++]=a[j++];
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}
void mergeSort(int a[100],int i, int j){
    if(i<j){
        int mid=(i+j)/2;
        mergeSort(a,i,mid);
        mergeSort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}
void main(){
    int a[100],n,i;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<=n-1;i++)
      scanf("%d",&a[i]);
    mergeSort(a,0,n-1);
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
