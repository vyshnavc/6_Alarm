#include "../inc/cpplib"
using namespace std;

class sample
{
	int a,b;
	public:
	void input(int a,int b)
	{
		this->a=a+b;
		this->b=a-b;
	}
	void output()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b;
	}
};

int main()
{
	sample x;
	x.input(5,8);
	x.output();
	return 0;
}
