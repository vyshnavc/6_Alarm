#include "../inc/cpplib"
using namespace std;

inline void print(int x)
{
    cout<<x<< " ";
}

int main()
{
    int i, N;
    cout<<"C++ Program to print first N natural numbers"<<endl<<endl;
    cout<<"Enter total number of natural numbers:"<<endl;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        print(i);
    }
    return 0;
}
