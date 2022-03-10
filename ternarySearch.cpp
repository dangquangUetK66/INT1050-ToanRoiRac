#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_ARRAY = 10000;

int ternarySearch (int value, int array[], int left, int right) {

    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (value == array[mid1]) {
            return mid1;
        }
        if (value == array[mid2]) {
            return mid2;
        }

        if (value < array[mid1]) {
            right = mid1 - 1;
        } else if (value > array[mid2]) {
            left = mid2 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }

    return -1;
}

int main () {
    int n, value, p;
    cin >> n >> value;

    int array[n];

    for (int i = 0; i < n; ++ i) {
        cin >> array[i];
    }

    sort (array, array + n);

    int left = 0, right = n-1;
    
    cout << ternarySearch(value, array, left, right);

    return 0;
}
