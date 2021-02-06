#include <iostream>
#include <iomanip>
using namespace std;

bool isFullTithePayer(int tithe, int income){
    if (tithe == income / .1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int income;
    int tithe;
    cout << "Income: ";
    cin >> income;
    cout << "\nTithe: ";
    cin >> tithe;
    cout << "\n";

    if (isFullTithePayer(tithe, income) == true){
        cout << "You are a full tithe payer.\n";
    }else if(isFullTithePayer(tithe, income) == false){
        cout << "Will ye rob God?\n";
        cout << "But ye say, Wherin have we robbed thee?\n";
        cout << "In tithes and offerings. Malachi 3:8\n";
    }else{
        
    }
    

    return 0;
}