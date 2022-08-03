#include <iostream>
#include <cmath>
using namespace std;

int main() {

float farenheit, celsius;
cout << " Enter temperature in Farenheit (Int) " << endl;
cin >> farenheit;
celsius = ((farenheit-32)*5)/9;
cout << " Your temperature in Celsius will be " << celsius << " degrees ";
return 0;

}