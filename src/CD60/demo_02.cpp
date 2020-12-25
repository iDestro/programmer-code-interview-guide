#include <iostream>
#include <string>
#include <vector>
using namespace std;

string folding(string s) {
    string temp = s+"0";
    for (int i = s.length()-1; i >= 0; i--) {
        temp += (s[i] == '0' ? "1" : "0");
    }
    return temp;
}

vector<string> paper_folding_lines(int N) {
    vector<string> res;
    string s = "001";
    if (N == 1) {
        s = "0";
    } else if (N == 2) {
        s = "001";
    } else {
        for (int i = N; i > 2; i--) {
            s = folding(s);
        }
    }
    for (auto ch:s) {
        res.push_back((ch == '0' ? "down" : "up"));
    }
    return res;
}

int main() {
    int N;
    scanf("%d", &N);
    vector<string> res = paper_folding_lines(N);
    for (string s: res) {
        cout << s << endl;
    }
    return 0;
}