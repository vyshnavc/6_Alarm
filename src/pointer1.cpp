#include"../inc/cpplib"
using namespace std;
class Rectangle
{
	private:
		int length;
		float breadth;
	public:
		void setData(int l, int b)
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
	// creating an object array of Rectangle
	Rectangle var[2]; 
	// setting values of array elements
	var[0].setData(5,2);
	var[1].setData(3,2);

	/* creating a pointer of Rectangle type & 
	   assigning address of var to this pointer */ 
	Rectangle* ptr;
	ptr = var;


	/* calculating area of rectangles by using pointer
	   ptr to call the objects getArea() function
	 */
	for(int i=0;i<2;i++)
	{
		cout<<"Area of Rectangle"<<(i+1)<<" : "<<(ptr+i)->getArea()<<endl;
	}
	return 0;
}
