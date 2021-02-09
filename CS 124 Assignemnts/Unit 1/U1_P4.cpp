#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int income;

    int taxes;
    int tithing;
    int budLiving;
    int actLiving;
    int other;

    cout << "Please enter the following:\n";
    cout << "\tYour monthly income: ";
    cin >> income;
    cout << "\n\tYour budget living expenses: ";
    cin >> budLiving;
    cout << "\n\tYour actual living expenses: ";
    cin >> actLiving;
    cout << "\n\tYour actual taxes withheld: ";
    cin >> taxes;
    cout << "\n\tYour actual tithe offering: ";
    cin >> tithing;
    cout << "\n\tYour actual other expenses: ";
    cin >> other;
    cout << endl;

    int acTithing = tithing + 20;

    cout << "The following is a report on your monthly expenses\n";
    cout << "\t=============== =============== ===============\n";
    cout << "\tIncome          $" << setw(11) << income << "    $" << setw(11) << income << endl;
    cout << "\tTaxes           $" << setw(11) << taxes << "    $" << setw(11) << taxes << endl;
    cout << "\tTithing         $" << setw(11) << tithing << "    $" << setw(11) << acTithing << endl;
    cout << "\tLiving          $" << setw(11) << budLiving << "    $" << setw(11) << actLiving << endl;
    cout << "\tOther           $" << setw(11) << other << "    $" << setw(11) << other << endl;
    cout << "\t=============== =============== ===============\n";
    cout << "\tDifferance      $" << setw(11) << income - income << "    $" << setw(11) << income -(taxes + acTithing + actLiving + other) << endl;

    return 0;
}