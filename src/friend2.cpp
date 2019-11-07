#include"../inc/cpplib"
using namespace std;

class A
{
	int x,y;
	public:
	friend int multi(A&);
	friend int add(A&);
	A(int,int);
};

A::A(int a,int b)
{
	x=a;
	y=b;
}

int multi(A &obj)
{
	int c;
	c=obj.x*obj.y;
	return c;
}

int add(A &obj)
{
	int c;
	c=obj.x+obj.y;
	return c;
}

int main()
{
	A A(10,20);
	cout<<"add="<<add(A)<<endl;
	cout<<"multi="<<multi(A)<<endl;
}


