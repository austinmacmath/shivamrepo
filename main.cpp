#include <iostream>
using namespace std;
int main(){
    int a = 2;
    switch(a) {
        case 1:
            cout << "x == 1" << endl;
        case 2:
            cout << "x == 2" << endl;
        case 3:
            cout << "x == 3" << endl;
            break;
        default:
            cout << "x != 1,2,3" << endl;
    return 0;
    }
}

// 