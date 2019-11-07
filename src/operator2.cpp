/*write a program to complete below expression by using member function 
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
	A operator+(const A &temp)
	{
		A result;
		result.x=x+temp.x;
		return result;
	}
	A operator*( A &temp)
	{
		A result;
		result.x=x*temp.x;
		return result;
	}
	A operator-( A &temp)
	{
		A result;
		result.x=x-temp.x;
		return result;
	}
	void print_data()
	{
		cout<<"x-"<<x<<endl;
	}
};
int main()
{
	A obj1(1),obj2(2),obj3(4),obj4(5),obj5;
	obj5=obj1+obj2*obj3-obj4;
	obj5.print_data();
}
