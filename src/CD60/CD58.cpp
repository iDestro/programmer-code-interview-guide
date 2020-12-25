#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second >= b.second;
    } else 
}

double cross_product(double x1, double y1, double x2, double y2) {
    return x1*y2-x2*y1;
}

bool is_inside(vector<pair<int, int>> rect, double x, double y) {

    return true;
}

int main() {
    double x, y;
    vector<pair<int, int>> rect;
    for (int i = 0; i < 5; i++) {
        cin >> x >> y;
        if (i < 4) {
            rect.push_back({x, y});
        }
    }
    cout << is_inside(rect, x, y) << endl;
    return 0;
}
