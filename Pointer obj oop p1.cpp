#include<iostream>
using namespace std;
class Parent{
	public:
		void Show(){
			cout<<"This is an Parent Class"<<endl;
		}
};
int main(){
	Parent *p;
	p=new Parent;
	p->Show(); //access member operator
	
}