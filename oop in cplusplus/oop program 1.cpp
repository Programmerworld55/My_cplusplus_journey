#include<iostream>
using namespace std;
class circle
{
	private:
		float radius;
		public:
		void get_radius(float r)
		{
			radius=r;
		}
		void area()
		{
			cout<<"area of circle"<<endl;
			cout<<3.14*radius*radius<<endl;
		}
		void circum()
		{
			cout<<"circumference of circle = "<<2*3.14*radius; 
			
		}
};
int main()
{
	circle z;
	int r;
	cout<<"enter radius"<<endl;
	cin>>r;
	//float r;
	z.get_radius(r);
	z.area();
	z.circum();
}