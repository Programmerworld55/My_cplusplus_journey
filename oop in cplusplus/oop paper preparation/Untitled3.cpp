//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class circle
{
	private:
		int r;
	public:
		void get_radius(float r2)
		{
			r = r2;
		}
		void areaofcircle()
		{
			cout<<"area of circle is below  "<<endl;
			cout<<r*r*3.14;
		}
		void cicumferenceofcircle()
		{
			cout<<"cicumferenceofcircle"<<2*3.14*r<<endl;
		}
};
main()
{
circle r;
float rad;
cin>>rad;
r.get_radius(rad);
r.areaofcircle();
r.cicumferenceofcircle();

}
