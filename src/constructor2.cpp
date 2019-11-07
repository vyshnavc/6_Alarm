#include"../inc/cpplib"
using namespace std;

class A
{
	int x,y;
	public:
	A(int a):x(a){}
	A(int a,int b):x(a),y(b){}
	void print()
	{
		cout<<"x-"<<x<<endl;
	}
	void print1()
	{
		cout<<"x-"<<x<<"y-"<<y<<endl;
	}
	~A()
	{
		cout<<"destructor"<<endl;
	}
};
int main()
{
	A *obj,*obj1;
	obj=new A(10);
	obj1=new A(10,20);
	obj->print();
	obj1->print1();
        delete obj;
        delete obj1;
}

