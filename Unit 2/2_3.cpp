#include<iostream>
using namespace std;
int main(){
    double price;
    double market_percen;
    double priceaftertax;
    double tax;

    
    cin>>price;
    cin>>market_percen;
    cin>>tax;
    cout<<price<<endl;
    cout<<market_percen<<endl;
    priceaftertax=price+price*(market_percen/100);
    cout<<price+price*(market_percen/100)<<endl;
    cout<<tax<<endl;
    cout<<priceaftertax*(tax/100)<<endl;
    cout<<priceaftertax+priceaftertax*(tax/100);

    return 0;
}