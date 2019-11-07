/*write a program to complete below expression by using friend function 
  obj5=obj1+obj2*obj3-obj4 */

#include"../inc/cpplib"
using namespace std;

class A
{
	int x;
	public:
	A()
	{
	}
	A(int a):x(a)
	{
	}
	friend A operator+(const A &temp,const A &temp1);
	friend A operator*(const A &temp,const A &temp1);
	friend A operator-(const A &temp,const A &temp1);
	void print_data()
	{
		cout<<"x-"<<x<<endl;
	}
};
A operator+(const A &temp,const A &temp1)
{
	A result;
	result.x=temp.x+temp1.x;
	return result;
}
A operator*(const A &temp,const A &temp1)
{
	A result;
	result.x=temp.x*temp1.x;
	return result;
}
A operator-(const A &temp,const A &temp1)
{
	A result;
	result.x=temp.x-temp1.x;
	return result;
}
int main()
{
	A obj1(1),obj2(2),obj3(4),obj4(5),obj5;
	obj5=(obj1+obj2)*obj3-obj4;
	obj5.print_data();
}
