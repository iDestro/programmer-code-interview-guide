#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int get_min(const vector<int>& arr) {
    int l = 0, r = arr.size()-1;
    int mid = 0;
    while (l < r) {
        if (l == r-1) {
            break;
        }
        if (arr[l] < arr[r]) {
            return arr[l];
        }
        mid = (l+r) / 2;
        if (arr[l] > arr[mid]) {
            r = mid;
            continue;
        }
        if (arr[r] < arr[mid]) {
            l = mid;
            continue;
        }
        while (l < mid) {
            if (arr[l] == arr[mid]) {
                l++;
            } else if (arr[l] < arr[mid]) {
                return arr[l];
            } else {
                r = mid;
                break;
            }
        }
    }
    return min(arr[l], arr[r]);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << get_min(arr);
    return 0;
}