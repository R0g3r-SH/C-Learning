#include<iostream>
#include <cmath>
using namespace std; 
int main(){
    const double k = 6.67*pow(10,-8); 
    double M1;
    double M2;
    double d;
    double F;

    cin>>M1;
    cin>>M2;
    cin>>d;
    F=k*(M1*M2/pow(d,2));
    cout<<F;



}