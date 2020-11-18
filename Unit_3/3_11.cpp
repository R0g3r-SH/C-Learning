#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double l, w, h, p;
    cin >> l >> w >> h ;
    cin>>p;
    l *= sqrt(1-(p/100));
    w *= sqrt(1-(p/100));
    cout << setprecision(2) << fixed << l << " x " << setprecision(2) << fixed << w << " x " << h << endl;
    return 0;
}