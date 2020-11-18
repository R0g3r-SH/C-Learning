#include <iostream>

#include<fstream>

#include<iomanip>

using namespace std;

int main(){

ifstream in;

in.open("inData.txt");

if(in.fail()){

cout<<"Unable to open file"<<endl;

return 0;

}

ofstream out;

out.open("outData.txt");

string fname, lname, dept;

double gross_sal, bonus, tax, distance_traveled, travel_time, cost, paycheck, avg_speed, sales_amount, total_sal;

int noCups;

while(!in.eof()){

in>>fname>>lname>>dept>>gross_sal>>bonus>>tax>>distance_traveled>>travel_time>>noCups>>cost;

total_sal = gross_sal + (gross_sal*(bonus/100.0));

paycheck = total_sal-(total_sal * (tax/100.0));

avg_speed = distance_traveled/travel_time;

sales_amount = noCups*cost;

out<<setprecision(2)<<fixed;

out<<"Name: "<<fname<<" "<<lname<<", Department: "<<dept<<endl;

out<<"Monthly Gross Salary: $"<<gross_sal<<" Monthly Bonus: "<<bonus<<"%, Taxes: "<<tax<<"%"<<endl;

out<<"Paycheck: $"<<paycheck<<endl;

out<<"\nDistance Traveled: "<<distance_traveled<<" miles, Traveling Time: "<<travel_time<<" hours"<<endl;

out<<"Average Speed: "<<avg_speed<<" miles per hour"<<endl;

out<<"\nNumber of Coffee Cups Sold:"<< noCups<<", Cost: $"<<cost<<" per cup"<<endl;

out<<"Sales Amount = $"<<sales_amount<<endl;

}

in.close();

out.close();

return 0;

}