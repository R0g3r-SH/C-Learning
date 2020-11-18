#include<iostream>
#include<math.h>
using namespace std;
int main(){
    const double hold = 3.78;
    double amount_milk;
    double cost;
    double profit;
    int cartons;

    cin>>amount_milk;
    cin>>cost;
    cin>>profit;
    cartons=static_cast<int>(round(amount_milk/hold));

    cout<<cartons<<endl;
    cout<< amount_milk*cost<<endl;
    cout<<profit*cartons;

    return 0;

}