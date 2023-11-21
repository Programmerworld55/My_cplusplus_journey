//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class test
{
	private:
		string name;
		public:
			void in()
			{
			cout<<"enter ur name"<<endl;
			cin>>name;
			}
			void out()
			{
				cout<<"your name is  : "<<name<<endl;
			}
};
main()
{
test *ptr[5];
for(int i=0;i<5;i++)
{
	ptr[i]=new test;
	ptr[i]->in();
}
for(int i=0;i<5;i++)
{
	ptr[i]->out();
}

}
