#include<iostream>
using namespace std;
class yahoo
{
	private:
		static int n;
		public:
			yahoo()
			{
				//n=0;
				n=n+2;
			}
			void show()
			{
				cout<<"you have created  "<<n<<"  objects so far"<<endl<<endl;
			}
};
int yahoo::n=0;
main()
{
	yahoo x;
	x.show();
	yahoo z;
	x.show();
	
}