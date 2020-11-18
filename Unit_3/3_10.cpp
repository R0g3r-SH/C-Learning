#include<iostream>
#include <iomanip> 
using namespace std;
int main(){
    double length;
    double radio;
    double space;
    double area;
    int number;
    const double pin = 3.14159 ;
    cout << fixed << showpoint << setprecision(2);
    cin>>length;
    cin>>radio;
    cin>>space;
    number =length/(radio*2+space);
    area =(pin*radio*radio)*number;
    cout<<number<<endl;
    cout<<area;

    return 0;

}