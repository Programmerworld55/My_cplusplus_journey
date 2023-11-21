#include<iostream>
using namespace std;
class result
{
	private:
		int rolno;
		string name;
		int marks[3];
		public:
	    void input()
	    {
	    	cout<<"enter name"<<endl;
	    	cin>>name;
	    	cout<<"enter rolnumber "<<endl;
	    	cin>>rolno;
	    	cout<<"enter marks of 3 subjects"<<endl;
	    	for(int i=0;i<3;i++)
	    	{
	    	cout<<"marks"<<i<<endl;
			cin>>marks[i];
		}
	}
		void display()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Rol NO = "<<rolno<<endl;
			cout<<"MARKS  ARE"<<endl;
				for(int i=0;i<3;i++)
			cout<<marks[i]<<endl;
		}
		void total()
		{
			int sum=0;
				for(int i=0;i<3;i++)
				sum=sum+marks[i];
			cout<<"total= "<<sum<<endl;
		}
		void avg()
		{
			int sum=0;
			int avg;
				for(int i=0;i<3;i++)
				avg=sum+marks[i]/5;
				cout<<"avg = "<<avg<<endl;
		}
		
};
 main()
{
	result m;
	m.input();
	cout<<endl;
	cout<<endl;
	m.display();
	m.total();
	m.avg();
}