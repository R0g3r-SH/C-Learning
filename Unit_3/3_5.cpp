#include<iostream>
#include <fstream>
#include <iomanip>
#include "stdlib.h"
#include <string>
using namespace  std;


int main(){
    ifstream inFile;
    ofstream outFile;
    string file;
    string name;
    string Sname;
    double salary;
    double increase;
    double newsalary;

    cout<<"Dame el nombre del archivo: ";
    cin>>file; 
    inFile.open(file);
    outFile.open("Ch3_Ex5Output.dat");

    for(int i = 0; i <= 2; i = i + 1)
    {   
        inFile>>Sname>>name>>salary>>increase;
        newsalary= salary+(salary*increase/100);
        outFile<<name<<" "<<Sname<<" "<<setprecision(2) <<fixed<<newsalary<<endl;
    }
}
