#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;



int min_needs(const vector<int>& arr, int range) {
    int needs = 0, touch = 0;
    for (int i = 0; i < arr.size(); i++) {
        while (arr[i] > touch + 1) {
            touch += touch+1;
            needs++;
            if (touch >= range) {
                return needs;
            }
        }
        touch += arr[i];
        if (touch >= range) {
            return needs;
        }
    }
    while (range >= touch+1) {
        touch += touch+1;
        needs++;
    }
    return needs;
}



int main() {
    int n, range;
    cin >> n >> range;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << min_needs(arr, range);
    return 0;
}