#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Employee
{
	protected:
		int ID;
		int scale;
		public:
		    Employee()
			{
				
				cout<<"Enter Employee ID "<<endl;
				cin>>ID;
				cout<<"Enter Employee scale"<<endl;
				cin>>scale;
				cout<<endl<<endl;
			}
			void show()
			{
				cout<<"Employee ID = "<<ID<<endl;
				cout<<"Employee scale = "<<scale;
				cout<<endl<<endl;
				
			}
		};
			
			
class Manager: public Employee
			{
			private:
			string Dep_Name;
			public:
			Manager() : Employee()
			{
				//Employee :: input();
				Employee :: show();
				cout<<endl;
				cout<<"Enter  Manager ID "<<endl;
				cin>>ID;
				cout<<"Enter Department Name"<<endl;
			    cin>>Dep_Name;
			    cout<<endl<<endl;
			}
			void show()
			{
				cout<<"Manager ID = "<<ID<<endl;
				cout<<"Department Name = "<<Dep_Name<<endl;
				
			}
};
main()
{
Manager obj;
obj.show();
cout<<endl;


}
