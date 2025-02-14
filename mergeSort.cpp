#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    // untuk membagikan array menjadi 2 bagian dulu
    int n1 = mid - left + 1;     // Ukuran subarray kiri
    int n2 = right - mid;        // Ukuran subarray kanan

    int leftArr[n1], rightArr[n2];

    // Copy elemen ke array sementara
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i]; // Perbaikan di sini
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2){
        if (leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
    }
    
    // masukan sisa element
    while (i < n1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}


// Fungsi rekursif Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Rekursi untuk bagian kiri dan kanan
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gabungkan dua bagian yang sudah diurutkan
        merge(arr, left, mid, right);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() {
    int arr[] = {5, 3, 8, 6, 2, 7, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum sorting: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Array setelah sorting: ";
    printArray(arr, n);

    return 0;
}