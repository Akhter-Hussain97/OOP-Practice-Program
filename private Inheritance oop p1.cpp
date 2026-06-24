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
class Child: private Parent{
	public:
		void Input(){
			cout<<"Enter the value  b, and c"<<endl;
			cin>>b>>c;
		}
		void Show(){
			cout<<"The value of  b and c"<<b<<c<<endl;
		}
};
int main(){
	 Child obj;
	 obj.Input();
	 obj.Show();
//	 cin>>obj.c;
	
}