#include "../inc/cpplib"

using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int l, int b)
		{
			length=l;
			breadth=b;
		}
		int getArea()
		{
			return 2*length*breadth;
		}
};

int main()
{
	// creating an object of Rectangle
	Rectangle var1(5,2); // parameterized constrcutor

	/* creating a pointer of Rectangle type & 
	   assigning address of var1 to this pointer */
	Rectangle* ptr = &var1;

	/* calculating area of rectangle by using pointer
	   ptr to call the objects getArea() function
	 */
	int area = ptr->getArea();
	cout<<"Area of rectangle is: "<<area;
	return 0;
}
