#include <iostream>
#include <iomanip>
using namespace std;

int computeTax(int income){
    int taxBracket;
    if(income > 336550){
        taxBracket = 35;
    cout << "Your tax bracket is " << taxBracket << "%\n";
    }
    else if(income > 188450 && income <= 336550){
        taxBracket = 33;
    cout << "Your tax bracket is " << taxBracket << "%\n";
    }
    else if(income > 123700 && income <= 18845){
        taxBracket = 28;
    cout << "Your tax bracket is " << taxBracket << "%\n";
    }
    else if(income > 61300 && income <= 123700){
        taxBracket = 25;
        cout << "Your tax bracket is " << taxBracket << "%\n";

    }
    else if(income > 15100 && income <= 61300){
        taxBracket = 15;
            cout << "Your tax bracket is " << taxBracket << "%\n";

    }
    else{
        taxBracket = 10;
           cout << "Your tax bracket is " << taxBracket << "%\n";
    }
    return taxBracket;
}

int main(int taxBracket){
    int income; 

    cout << "Income: ";
    cin >> income;
    computeTax(income);
    return 0; 
}