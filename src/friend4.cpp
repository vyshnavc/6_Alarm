/*write a cpp program to find out total salary of husband and wife using friend*/

#include"../inc/cpplib"
using namespace std;

class wife;
class husband
{
	char name[20];
	float sal;
	public :
	void set_data()
	{
		cout<<"enter husband details \n name : ";
		cin>>name;
		cout<<"\nsalary: ";
		cin>>sal;
	}
	void print_data()
	{
		cout<<"husband details \nname :"<<name<<"\nsalary :"<<sal<<endl;
	}
	friend void income_tax(husband,wife);
};
class wife
{
	char name[20];
	float sal;
	public :
	void set_data()
	{
		cout<<"enter wife details \n name : ";
		cin>>name;
		cout<<"\nsalary: ";
		cin>>sal;
	}
	void print_data()
	{
		cout<<"husband details \nname :"<<name<<"\nsalary :"<<sal<<endl;
	}
	friend void income_tax(husband,wife);
};
void income_tax(husband h,wife w)
{
	float total;
	total=h.sal+w.sal;
	if(total<50000)
		cout<<"\nno need to pay tax";
	else 
		cout<<"\ntax have to pay"<<endl;
}
main()
{
	husband h;
	wife w;
	h.set_data();
	w.set_data();
	income_tax(h,w);
	h.print_data();
	w.print_data();
}
