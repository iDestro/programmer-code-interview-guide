#include <iostream>
using namespace std;

void process(int depth, int N, bool is_down) {
    if (depth > N) {
        return;
    }
    process(depth+1, N, true);
    cout << (is_down ? "down" : "up") << endl;
    process(depth+1, N, false);
}

void print_all_folds(int N) {
    process(1, N, true);
}

int main() {
    int N;
    cin >> N;
    print_all_folds(N);
    return 0;
}