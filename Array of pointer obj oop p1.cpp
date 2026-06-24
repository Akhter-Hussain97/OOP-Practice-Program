#include<iostream>
using namespace std;
class Parent{
	public:
		void Show(){
			cout<<"This is an Parent Class"<<endl;
		}
};
int main(){
	Parent *p[5];
	for(int i=0; i<5; i++){
    p[i]=new Parent;
	p[i]->Show();
}
	
}