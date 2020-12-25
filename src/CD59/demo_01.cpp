#include <iostream>
using namespace std;

double cross_product(double x1, double y1, double x2, double y2) {
    return x1*y2-x2*y1;
}

bool is_inside(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y) {
    if (cross_product(x3-x1, y3-y1, x2-x1, y2-y1) >= 0) {
        double temp_x = x2;
        double temp_y = y2;
        x2 = x3;
        y2 = y3;
        x3 = temp_x;
        y3 = temp_y;
    }
    if (cross_product(x1-x3, y1-y3, x-x3, y-y3) < 0) {
        return false;
    }
    if (cross_product(x3-x2, y3-y2, x-x2, y-y2) < 0) {
        return false;
    }
    if (cross_product(x2-x1, y2-y1, x-x1, y-y1) < 0) {
        return false;
    }
    return true;
}

int main() {
    double x1, x2, x3, x, y1, y2, y3, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y;
    if (is_inside(x1, y1, x2, y2, x3, y3, x, y)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
