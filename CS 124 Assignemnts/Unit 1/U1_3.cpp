#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int fahrenheit;
    int celsius;
    cout << "Please enter Fahrenheit degrees: ";
    cin >> fahrenheit;
    celsius = fahrenheit - 32;
    cout << "Celsius: " << celsius << endl;

    return 0;
}