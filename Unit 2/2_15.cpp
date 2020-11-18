#include<iostream>
using namespace std;
int main(){
    const double pi= 3.141593;
    double radious;
    double price;
    double square_inch;

    cin>>radious;
    cin>>price;
    square_inch=price/(pi*radious*radious);
    cout<<square_inch;

    return 0;
}