#include<iostream>
using namespace std;

void checkPoint(int x, int y) {
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin." << endl;
    } else if (x == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else {
        cout << "The point does not lie on any axis." << endl;
    }
}

int main() {
    int x, y;
    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y;

    checkPoint(x, y);

    return 0;
}