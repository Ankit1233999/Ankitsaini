#include <iostream>
using namespace std;

int main() {
    int array[] = {5, 10, 15, 20, 25};
    int sum = 0;
    int *ptr = array;

    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    cout << "Sum: " << sum << endl;
    return 0;
}