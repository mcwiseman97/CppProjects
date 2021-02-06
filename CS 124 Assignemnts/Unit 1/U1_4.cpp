#include <iostream>
#include <iomanip>
using namespace std;

void questionPeter(){
    cout << "Lord, how oft shall my brother sin against me, and I forgive hime?\n";
    cout << "Till seven times?\n";
}

int responseLord(){


     return 7 * 70;
}

int main(){
    questionPeter();
    cout << "Jesus saith  unto him, I say not unto thee, until Seven\n";
    cout << "time: but, Until " << responseLord() << ".\n";
    return 0;
}