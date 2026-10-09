#include<iostream>
using namespace std;

int main() {
    int distance_kilo , distance_meter , distance_centimeter;
    cout << "Enter distance in kilometers: ";
    cin >> distance_kilo;
    distance_meter = distance_kilo * 1000;
    distance_centimeter = distance_meter * 100;
    cout << "Distance in meters: " << distance_meter << endl;
    cout << "Distance in centimeters: " << distance_centimeter << endl;
    return 0;
}