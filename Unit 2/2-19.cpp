#include<iostream>
using namespace std;
int main (){
    int quarters;
    int dimes;
    int nickels;
    int penies;

    cin>>quarters;
    cin>>dimes;
    cin>>nickels;
    penies=(quarters*25)+(dimes*10)+(nickels*5);
    cout<<penies;
    

}