#include<iostream>
using namespace std;
class Employee{
    protected:
        int id,scale;
    public:
        void input(){
        	cout<<"\t*****Enter Employee Data*****\n\n";
            cout<<"\nEnter employee id:";
            cin>>id;
            cout<<"Enter employee scale:";
            cin>>scale;
        }
        void show(){
            cout<<"\nEmployee ID Is:"<<id;
            cout<<"\nEmployee scale Is:"<<scale;
        }
};
class Manager:public Employee{
    private:
        string dept;
    public:
        void input(){
        	cout<<"\n\n\t*****Enter Manager Data*****\n\n";
            cout<<"\nEnter Manager id:";
            cin>>id;
            cout<<"Enter Manager department:";
            cin>>dept;
        }
        void show(){
            cout<<"\nManager ID Is:"<<id;
            cout<<"\nManager department Is:"<<dept;
        }
};
int main()
{
    Employee e;
    e.input();
    e.show();
    Manager m;
    m.input();
    m.show();
    return 0;
}

