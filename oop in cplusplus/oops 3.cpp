#include<iostream>
using namespace std;
class book
{
	private:
	int bookID,pages,price;
	public:
		void get()
		{
			cout<<"enter book ID = "<<endl;
			cin>>bookID;
			cout<<"entert pages = "<<endl;
			cin>>pages;
			cout<<"enter price = "<<endl;
			cin>>price;
			
		}
		void show()
		{
			cout<<"Book ID = "<<bookID<<endl;
		
			cout<<"Pages = "<<pages<<endl;
			
			cout<<"Price = "<<price<<endl;
		
		}
		void set(int ID,int pages,int price)
		{
			bookID=ID;
			pages=pages;
			price=price;
		}
		float getprice()
		{
			return price;
		}
	
};
main()
{
	book o;
	o.get();
	o.set(2,320,150.75);
	o.show();

}