#include <iostream>
using namespace std;
#include <iomanip>

int main(){

    cout <<  "Items\t" << "     " << "Projected" << endl;
    cout << "============ ============" << endl;
    cout << "Income       $" << setw(11) << "1000.00" << endl;
    cout << "Taxes        $" << setw(11) << "100.00" << endl;
    cout << "Tithing      $" << setw(11) << "100.00" << endl;
    cout << "Living       $" << setw(11) << "650.00" << endl;
    cout << "Other        $" << setw(11) << "90.00" << endl;
    cout << "============ ============" << endl;
    cout << "Income       $" << setw(11) << "60.00" << endl;
    
    return 0;
}