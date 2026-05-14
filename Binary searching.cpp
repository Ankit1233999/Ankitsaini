#include<iostream>
using namespace std;

int searchRotated(int arr[], int size, int target) {

    int start = 0;
    int end = size - 1;

    while(start <= end) {

        int mid = (start + end) / 2;

        // target found
        if(arr[mid] == target) {
            return mid;
        }

        // Left part sorted
        if(arr[start] <= arr[mid]) {

            // target lies in left part
            if(target >= arr[start] && target < arr[mid]) {
                end = mid - 1;
            }

            else {
                start = mid + 1;
            }
        }

        // Right part sorted
        else {

            // target lies in right part
            if(target > arr[mid] && target <= arr[end]) {
                start = mid + 1;
            }

            else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    int arr[] = {4,5,6,7,0,1,2,3};

    int size = 8;
    int target = 0;

    int ans = searchRotated(arr, size, target);

    cout << "Element found at index: " << ans;

    return 0;
}