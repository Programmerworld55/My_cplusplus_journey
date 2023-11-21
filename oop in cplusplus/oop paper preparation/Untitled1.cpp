//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class test
{
	private:
		int x;
		public:
			void in()
			{
				cout<<"enter a number "<<endl;
				cin>>x;
			}
			void out()
			{
				cout<<"value of x is "<<x;
			}
		};
main()
{
test m;
m.in();
m.out();

}
