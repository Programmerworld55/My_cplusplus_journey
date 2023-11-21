//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class A
{
	private:
		string name;
		public:
			void show1()
			{
				cout<<"class A: "<<name<<endl;
			}
			
		
};
class B:public A
{
	private:
		string name;
		public:
			void show2()
			{
				cout<<"class B: "<<name<<endl;
			}
};
class C:public A
{
	private:
		string name;
		public:

			void show3()
			{
				cout<<"class c also"<<endl;
			}
};
main()
{
A *ptr;
A obj1;
ptr = &obj1;
ptr->show1();

B *ptr2;
ptr2 = &obj2;
ptr2->show2();
}


