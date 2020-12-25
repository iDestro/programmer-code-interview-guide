#include <iostream>
#include <cmath>
using namespace std;

double area(double p1[], double p2[], double p3[]) {
    double k = (p1[1]-p2[1]) / (p1[0]-p2[0]);
    double h = abs((p3[1]-p2[1])/(p1[1]-p2[1])-(p3[0]-p2[0])/(p1[0]-p2[0])) / sqrt(1+k*k);
    double a = sqrt(pow(p1[1]-p2[1], 2) + pow(p1[0]-p2[0], 2));
    return a/2*h;
}

int main() {
    double triangle[3][2];
    double point[2];
    for (int i = 0; i < 3; i++) {
        scanf("%lf%lf", &triangle[i][0], &triangle[i][1]);
    }
    scanf("%lf%lf", &point[0], &point[1]);
    double area0 = area(triangle[0], triangle[1], triangle[2]);
    double area1 = area(triangle[0], triangle[1], point);
    double area2 = area(triangle[0], triangle[2], point);
    double area3 = area(triangle[1], triangle[2], point);
    cout << area0 << endl;
    cout << area1+area2+area3 << endl;
    if (area0 >= area1+area2+area3) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}