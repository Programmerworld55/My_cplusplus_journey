//     Name:Asad Bashir      Rol no:75
//write a program which display the given input as it is.
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
main()
{
    string team1,team2;
     team1="karachi king";
     team2="islamabad_united";
    cout<<"team1:"<<setw(50)<<setfill('*')<<team1<<endl;
    cout<<"team2:"<<setw(54)<<setfill('*')<<team2<<endl;
    cout<<"number of tickets sold:"<<setw(20)<<setfill('*')<<"\t"<<"1590"<<endl;
    cout<<"Gross amount:"<<setw(44)<<setfill(' ')<<"pkr 129500.00"<<endl;
    cout<<"percentage of gross amount donated:"<<"\t"<<"\t"<<setfill(' ')<<"10.00%"<<endl;
	cout<<"amount donated:"<<setw(42)<<setfill('*')<<"pkr 129500.00"<<endl;  
	cout<<"net sale:"<<setw(49)<<setfill('*')<<"pkr 1165500.00";
}
