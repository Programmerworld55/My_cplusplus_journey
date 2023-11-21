//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class X
{
	private:
		int a;
		int b;
		public:
			X()
			{
				a=10;
				b=20;
				
			}
			friend class B;
			
};
class B
{
	public:
		void showA1(X obj)
		{
			cout<<"value of A is "<<obj.a<<endl;
			
		}
		void showA2(X obj)
		{
			cout<<"value of B is "<<obj.b<<endl;
		}
};
main()
{
X x;
B y;
y.showA1(x);
y.showA2(x);

}
