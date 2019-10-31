#include <iostream>
#include <cmath>
using namespace std;

bool check_descending(int first, int second, int third) {
        if(first >= second) {
            if(second >= third) {
                return true;
            }
            return false;
        }
        return false;
    }
int main() {
    /* int score;
    char grade;
    cout << "Please intput the student's score as an integer: ";
    cin >> score;
    if((score > 100) || (score < 0)) {
        cout << "Not a valid score" << endl;
        return 0;
    }
    else if(score >= 90) {
        grade = 'A';
    }
    else if(score >= 80) {
        grade = 'B';
    }
    else if(score >= 70) {
        grade = 'C';
    }
    else if(score >= 60) {
        grade = 'D';
    }
    else if(score >= 0) {
        grade = 'F';
    }
    cout << "\n Grade is " << grade << endl;
    return 0; */

    /* int a(1), b(2), c(2), d(2), e(2);
    double f;
    f = static_cast<double>((a + b) * c/(d + e));
    cout << f << endl; */

    //double s(0.0);
    /* int k(0);
    cout << "Enter k: ";
    cin >> k;
    for (int i = 0; i <= k; i++) {
        s = s + pow(2.0/3, i);
    }
    cout << "Series converges to: " << s << endl; */

    
    //cout << check_descending(10,10,10) << endl;
    int *p, *q;
int x;
p = &x;
q = new int;
*p = 50;
*q = 60;
cout << *p << ", "   << *q << endl;
p = q;
cout << *p << ", "  <<  *q << endl;
*p = 30;
*q = 40;
cout << *p << ", " << *q << endl;
delete p;
delete q;
    return 0;
}
