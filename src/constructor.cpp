#include"../inc/cpplib"
using namespace std;

class A
{
	int x,y;
	public:
	A()
	{
		cout<<"default"<<endl;
	}
	A(int a,int b):x(a),y(b)
	{
		cout<<"parameterized"<<endl;
	}
	A(A &temp)
	{
		cout<<"copy constructor"<<endl;
		x=temp.x;
		y=temp.y;
	}
	void print_data()
	{
		cout<<"x-"<<x<<" ";
		cout<<"y-"<<y<<endl;
	}
};
main()
{
	A obj1(100,200),obj2(obj1);
	A obj3=obj2;
	A obj4;
	obj4=obj3;
	obj1.print_data();
	obj2.print_data();
	obj3.print_data();
	obj4.print_data();
}
