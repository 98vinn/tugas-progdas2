#include <iostream>
#include <cmath>
using namespace std;

// Fungsi-fungsi
double distance(double x1, double y1, double x2, double y2);
double radius(double x1, double y1, double x2, double y2);
double circumference(double r);
double area(double r);
double round2(double value);

const double PI = 3.1416;

int main() {
    double x1, y1, x2, y2;

    // Input koordinat
    cout << "Enter the coordinates of the center (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of a point on the circle (x2 y2): ";
    cin >> x2 >> y2;

    // Hitung nilai
    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    // Output hasil (dibulatkan ke dua angka di belakang koma)
    cout << "\n=== Circle Properties ===\n";
    cout << "Radius: " << round2(r) << endl;
    cout << "Diameter: " << round2(d) << endl;
    cout << "Circumference: " << round2(c) << endl;
    cout << "Area: " << round2(a) << endl;

    return 0;
}

// Definisi fungsi
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

double circumference(double r) {
    return 2 * PI * r;
}

double area(double r) {
    return PI * pow(r, 2);
}

// Fungsi pembulatan 2 desimal tanpa iomanip/cstdio
double round2(double value) {
    return floor(value * 100 + 0.5) / 100;
}
