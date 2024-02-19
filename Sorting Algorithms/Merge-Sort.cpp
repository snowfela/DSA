#include <iostream>
using namespace std;

void merge(int a[], int p, int q, int r){
    int left[q-p+1], right[r-q],i,j,k;
    for (i = 0; i <= q - p; i++)
        left[i]=a[p+i];
    for (j = 0; j < r-q ; j++)
        right[j]=a[q+1+j];
    i=0, j=0, k=p;
    while (i<=(q-p) && j<(r-q)){
        if (left[i]<=right[j])
            a[k++]=left[i++];
        else
           a[k++]=right[j++]; 
    }
    while (i<=(q-p))
        a[k++] = left[i++];
    while (j<(r-q))
        a[k++] = right[j++];
}

void mergesort(int a[], int p, int r){
    if (p >= r) 
        return;
    int q=(p+r)/2;
    mergesort(a, p, q);
    mergesort(a, q + 1, r);
    merge(a,p,q,r);
}

int main(){
    int a[] = { 38, 27, 43, 3, 9, 82, 10 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Original array: " ;
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl << "Sorted array: ";
    mergesort(a,0,n-1);
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

/*  output:
Original array: 38 27 43 3 9 82 10 
Sorted array: 3 9 10 27 38 43 82     */
