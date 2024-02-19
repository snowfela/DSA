#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){ 
    for (int i = 0; i < n - 1; i++) 
        for (int j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]){
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp;
            }
} 

int main(){
    int a[] = { 38, 27, 43, 3, 9, 82, 10 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Original array: " ;
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl << "Sorted array: ";
    bubblesort(a,n);
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

/*  output:
Original array: 38 27 43 3 9 82 10 
Sorted array: 3 9 10 27 38 43 82     */
