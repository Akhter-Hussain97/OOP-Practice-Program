#include<iostream>
using namespace std;
class Parent{
	public:
	  void Show(){
			cout<<"I am parent class"<<endl;
		}
};
class Child: public Parent{
	public:
	void Show(){
	//	Parent::Show();
			cout<<"I am child class"<<endl;
		}
};
int main(){
	Child C;
	C.Show();
	C.Parent::Show();
	
}