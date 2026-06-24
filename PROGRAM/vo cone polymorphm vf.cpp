#include<iostream>
using namespace std;
//v=3.14*r*r*h/3;
class Shape{
	protected:
		int r,h;
	public:
     virtual void getvalue()=0;
     virtual void displayArea()=0;
};
class Cone:public Shape{
	public:
	void getvalue(){
		cout<<"enter the radius and height of circle"<<endl;
		cin>>r>>h;
	}
	void displayArea(){
		cout<<"===Volume of Cone==="<<endl;
		float V,sum;
		sum=(3.14)*r*r*h;
		V=sum/3.0;
		cout<<V<<endl;
	}
};
int main(){
	Cone c1;
	Shape *sh;
	sh=&c1;
	sh->getvalue();
	sh->displayArea();
}