#include"../inc/cpplib.h"
using namespace std;

class A
{
static int x,y;
public:
static void input(int a,int b)
{
x=a;
y=b;
}
static void print()
{
cout<<x<<" "<<y<<endl;
}
};
int A::x;      //we need to initialize static data before passing any argument ,otherwise it will show error
int A::y;
int main()
{
A obj;
A::print();
obj.input(10,15);      //we can access static funtion using nonstatic object also
A::print();
}
