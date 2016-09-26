#include<iostream>
using namespace std;
class A{
	int x;
	public:
		void getvalue(){
			cin>>x;
		}
		void show(){
			
			cout<<x;
		}
};
class B{
	A a;
	int y;
	public:
		//A b;
		void dummy(){
			A b;
			b.getvalue();
			b.show();
		}
};

int main()
{
	B bb;
	bb.dummy();
	return 1;
}
