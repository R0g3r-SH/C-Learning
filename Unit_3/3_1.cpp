#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    ifstream inFile;
    ofstream outFile;
    string firstname;
    string lastname;
    string job;
    double Salary, Bonus, Taxes, Paycheck,FinalPay,miles,hours,averageS,cost,sales;
    int sold;
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    inFile>>firstname>>lastname>>job;
    outFile<<"Name: "<<firstname<<" "<<lastname<<", "<<"Department: "<<job<<endl;
    inFile>>Salary>>Bonus>>Taxes;
    outFile<<setprecision (2) << fixed <<"Monthly Gross Salary: $"<<Salary<<", "<<"Monthly Bonus: "<<Bonus<<"%, Taxes: "<<Taxes<<"%"<<endl;
    Paycheck= Salary+(Salary*(Bonus/100));
    FinalPay=Paycheck-(Paycheck*(Taxes/100));
    outFile<<setprecision(2) <<fixed<<"Paycheck: $"<<FinalPay<<endl<<endl;

    inFile>>miles>>hours;
    outFile<<setprecision(2)<<"Distance Traveled: "<<miles<<" miles"<<", "<<"Traveling Time: "<<hours<<" hours"<<endl;
    averageS=miles/hours;
    outFile<<"Average Speed: "<<averageS<<" miles per hour"<<endl<<endl;

    inFile>>sold>>cost;
    outFile<<"Number of Coffee Cups Sold: "<<sold<<setprecision(2)<<", Cost: $"<<cost<<" per cup"<<endl;
    sales=sold*cost;
    outFile<<setprecision(2)<<"Sales Amount = $"<<sales;

    inFile.close();
    outFile.close();

    return 0;



}