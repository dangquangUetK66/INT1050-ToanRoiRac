#include <iostream>

using namespace std;

int binarySearch (int left, int right, int arr[], int value) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (value == arr[mid]) return mid;
        if (value < arr[mid]) {
            right = mid - 1;
        } else if (value > arr[mid]) {
            left = mid + 1;
        }
    }

    return left;
}

void insertionSort (int arr[], int n) {
    for (int i = 1; i < n; ++ i) {
        int key = arr[i];
        int j = i - 1;

        int location = binarySearch(0, j, arr, key);

        while (j >= location) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main () {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++ i) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; ++ i) {
        cout << arr[i] << " ";
    }

    return 0;
}