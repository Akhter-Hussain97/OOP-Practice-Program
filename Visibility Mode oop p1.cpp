#include<iostream>
using namespace std;
class Parent{
	protected:
		int a=5;
	public:
		void Show_P(){
			cout<<"THE PARENT FUNCTION NO IS "<<a<<endl;
		}
};
class Child: private Parent{
	private:
		int c=7;
	public:
		void Show_C(){
			Child::Show_P();
			cout<<"THE CHILD FUNCTION NO IS "<<c<<endl;
		}
};
int main(){
	Child obj;
	obj.Show_C();
}