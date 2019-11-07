/*perticular member function of a class to another class*/

#include"../inc/cpplib"
using namespace std;

class A;
class B
{
	int m,n;
	public:
	void set_data(int a,int b)
	{
		m=a,n=b;
	}
	void print_data(A &temp);
	void print_data1(A &temp);
};
class A
{
	int x,y;
	public:
	void set_data(int a,int b)
	{
		x=a,y=b;
	}
	friend void B::print_data(A &temp);
};
void B::print_data(A &temp)
{
	cout<<"x-"<<temp.x<<" ";
	cout<<"y-"<<temp.y<<endl;
}
void B::print_data1(A &temp)
{
	//cout<<"x-"<<temp.x<<" ";
	//cout<<"y-"<<temp.y<<endl;
}
int main()
{
	A a1;
	a1.set_data(10,20);
	B b1;
	b1.print_data(a1);
	b1.print_data1(a1);
}


