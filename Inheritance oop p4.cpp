#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"A Class"<<endl;
		}
};
class B{
	public:
		B(){
			cout<<"B Class"<<endl;
		}
};
class C: public A, public B{
	public:
			C(){
			cout<<"C Class"<<endl;
		}
};
int main(){
	C c;
	
}