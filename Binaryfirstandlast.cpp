#include<iostream>
using namespace std;

// First Occurrence Function
int firstOccurrence(int arr[], int size, int target) {
 
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start <= end) {

        int mid = (start + end) / 2;

        if(arr[mid] == target) {
            ans = mid;
            end = mid - 1; // move left
        }

        else if(arr[mid] < target) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    return ans;
}

// Last Occurrence Function
int lastOccurrence(int arr[], int size, int target) {

    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start <= end) {

        int mid = (start + end) / 2;

        if(arr[mid] == target) {
            ans = mid;
            start = mid + 1; // move right
        }

        else if(arr[mid] < target) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {

    int arr[] = {1,2,2,3,3,3,4,5,6,6,7,7,8,8,9};

    int size = 15;
    int target = 3;

    int first = firstOccurrence(arr, size, target);
    int last = lastOccurrence(arr, size, target);

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

    return 0;
}