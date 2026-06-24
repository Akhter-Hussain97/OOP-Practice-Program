#include<iostream>
using namespace std;
class Shape{
	protected:
		int a,b;
	public:
     virtual void getvalue()=0;
     virtual void displayArea()=0;
};
class circle:public Shape{
	public:
	void getvalue(){
		cout<<"enter the radius of circle"<<endl;
		cin>>a;
	}
	void displayArea(){
		cout<<"===Area of Circle==="<<endl;
		float ac;
		ac=3.14*a*a;
		cout<<ac<<endl;
	}
};
class rectangle:public Shape{
	public:
		void getvalue(){
		cout<<"enter the length and width of rectangle"<<endl;
		cin>>a>>b;
	}
	void displayArea(){
		cout<<"===Area of Rectangle==="<<endl;
		int ar;
		ar=a*b;
		cout<<ar<<endl;
	}
};
int main(){
	int choice;
circle c1;
rectangle r1;
Shape *sh[2];
sh[0]=&c1;
sh[1]=&r1;
sh[0]->getvalue();
sh[1]->getvalue();
sh[0]->displayArea();
sh[1]->displayArea();
cout<<"enter the choice"<<endl;
cin>>choice;
switch(choice)
{
case 1:
sh[0]->getvalue();
sh[0]->displayArea();
break;
case 2:
sh[1]->getvalue();
sh[1]->displayArea();
break;
default:
  cout<<"";
}
}


