#include"../inc/cpplib"
using namespace std;

class A
{
	char *str;
	public:
	A()
        {
        }
        A(const char *p)
	{
		str=new char[strlen(p)+1];
		strcpy(str,p);
	}
        A(A &temp)
        {
         str=new char[strlen(temp.str)+1];
         strcpy(str,temp.str);
        }
        void modify()
        {
         str[0]='y';
        }
	void print()
	{
		cout<<"string is = "<<str<<endl;
	}
        ~A()
         {
           cout<<"\ndestructor"<<endl;
         }
};
int main()
{
	A obj("vyshnav"),obj1(obj);
	obj.print();
        obj1.print();
        obj.modify();
        cout<<"\nafter modified"<<endl;
	obj.print();
	obj1.print();
        
}
