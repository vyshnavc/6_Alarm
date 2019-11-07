/*friend class*/
#include"../inc/cpplib"
using namespace std;

class A
{
	int x,y;
	public:
	void set_data(int a,int b)
	{
		x=a,y=b;
	}
	friend class B;
};
class B
{
	int m,n;
	public :
	void set_data(int a,int b)
	{
		m=a,n=b;
	}
	void print_data(A &temp)
	{
		cout<<"x-"<<temp.x<<" ";
		cout<<"y-"<<temp.y<<endl;
	}
	void print_data1()
	{
		cout<<"m-"<<m<<" ";
		cout<<"n-"<<n<<endl;
	}
};
int main()
{
	A a1;
	a1.set_data(10,20);
	B b1;
	b1.set_data(40,50);
	b1.print_data(a1);
	b1.print_data1();
}
