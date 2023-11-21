//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
		public:
			A()
			{
			a=10;
			}
			friend void show(A,B);
};
class B
{
	private:
		int b;
		public:
			B()
			{
				b=20;
			}
			friend void show(A,B);
};
void show(A x,	B y)
{
	int s;
	s=x.a+y.b;
	cout<<"value of class A is "<<x.a<<endl;
	cout<<"value of class B is "<<y.b<<endl;
	cout<<"sum is "<<s<<endl;
	
}

main()
{
A obj1;
B obj2;
show(obj1,obj2);


}
