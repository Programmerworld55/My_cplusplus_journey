//     Name:Asad Bashir       Rol no:75
//write a program which display date by using switch.

#include<iostream>
using namespace std;
int main()
{
int Mnth,day,year;
	cout<<"Enter Mnth,day & year:"<<endl;
	cin>>Mnth>>day>>year;
switch(Mnth)	
{
case 1:
	cout<<"January"<<day<<","<<year<<endl;
break;		
case 2:
	cout<<"Feburary"<<day<<","<<year<<endl;
break;		
case 3:
	cout<<"March"<<day<<","<<year<<endl;
break;	
	case 4:
	cout<<"April"<<day<<","<<year<<endl;
break;
	case 5:
	cout<<"May"<<day<<","<<year<<endl;
break;	
	case 6:
	cout<<"June"<<day<<","<<year<<endl;
break;	
	case 7:
	cout<<"July"<<day<<","<<year<<endl;
break;	
	case 8:
	cout<<"August"<<day<<","<<year<<endl;
break;
	case 9:
	cout<<"September"<<day<<","<<year<<endl;
break;
	case 10:
	cout<<"October"<<day<<","<<year<<endl;
break;	
	case 11:
	cout<<"November"<<day<<","<<year<<endl;
break;	
	case 12:
	cout<<"December"<<day<<","<<year<<endl;
break;	
default:	
	cout<<"Please Enter Valid Input"<<endl;
}	
return 0;	
}
