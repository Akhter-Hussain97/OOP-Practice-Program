#include<iostream>
using namespace std;
class Parent{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
};
class Child: public Parent{
	public:
		void Input(){
			cout<<"Enter the value a, b, and c"<<endl;
			cin>>a>>b>>c;
		}
		void Show(){
			cout<<"The value of a b and c"<<a<<b<<c<<endl;
		}
};
int main(){
	 Child c;
	 c.Input();
	
}