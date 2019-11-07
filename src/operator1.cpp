/*multiple addition using operator overloading*/

#include"../inc/cpplib"
using namespace std;

class A
{
	int x,y;
	public:
        A(){}
	A(int a,int b):x(a),y(b)
	{
	}

	A operator+(A &temp)
	{
		A result;
		result.x=x+temp.x;
		result.y=y+temp.y;
		return result;
	}
	void print_data()
	{
		cout<<"x-"<<x<<"\ny-"<<y<<endl;
	}
};
int main()
{
	A obj1(10,20),obj2(40,50),obj3(100,40),obj4(50,30);
        A obj5;
	obj5=obj1+obj2+obj3+obj4;
	obj5.print_data();
}





