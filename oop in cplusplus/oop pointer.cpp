//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class A
{
	public:
		virtual void in()
		{
	cout<<"ITS CLASS A"<<endl;
}
void out()
{
	cout<<"ITS ALSO class A"<<endl;
}
	
};
class B : public A 
{
	public:
		void in()
		{
			A :: in();
			A  :: out();
	cout<<"class B"<<endl;
}
void out()
{
	cout<<"ITS ALSO class B"<<endl;
}
	
};

main()
{

B *ptr;
ptr = new B;
for(int i;i<=5;i++)
{
ptr->in();
ptr->out();
}

	
	
	
	
}
