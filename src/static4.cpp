#include"../inc/cpplib"
using namespace std;

class A
{
	static int x;
	A()                   /*constructor at private section*/   
	{
		x++;
	}
	public:
	static void object(void)
	{
		A obj;               /*creating object*/
	}
	static void objcount(void)
	{
		cout<<"count-"<<x<<endl;
	}
};

int A::x;

int main()
{
	for(int i=0;i<5;i++)
		A::object();         /*static funtion can be accessed by using class name and scope resolution operator.so we can make constructor in private section.to make object initialization for secure then we can use this methods*/

	A::objcount();
}
