#include<iostream>
using namespace std;
class Employee
{
	protected:
		int ID;
		int scale;
		public:
			Employee()
			{
				cout<<"Enter employee ID "<<endl;
				cin>>ID;
				cout<<"enter employee scale "<<endl;
				cin>>scale;
			}
			void show1()
			{
				cout<<"EMPLOYEE ID = "<<ID<<endl;
				cout<<"EMPLOYEE SCALE = "<<scale<<endl;
				
			}
};
class Manager:public Employee
{
		protected:
			string dep_name;
			public:
				void input()
				{
				cout<<"Enter Manager  ID "<<endl;
				cin>>ID;
				cout<<"Enter DEP-Name "<<endl;
				cin>>dep_name;	
				}
			void show2()
			{
				cout<<"MANAGER ID = "<<ID<<endl;
				cout<<"DEP-NAME = "<<dep_name<<endl;
				
			}
};
main()
{
	Manager obj1;
	obj1.show1();
	cout<<endl<<endl;
	obj1.input();
	obj1.show2();
	
}
