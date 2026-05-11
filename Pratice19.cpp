#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Function to set values
    void setData(int l, int w) {
        length = l;
        width = w;
    }

    // Function to calculate and display area
    void displayArea() {
        int area = length * width;
        
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Rectangle r;

    r.setData(10, 5);
    r.displayArea();

    return 0;
}