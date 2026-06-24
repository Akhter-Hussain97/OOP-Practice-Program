#include<iostream>
using namespace std;
class Shape{
	protected:
		int length,width;
	public:
		virtual void get_value()=0;
		virtual void display_Area()=0;	
};
class Rectangle:public Shape{
	public:
		void get_value(){
			cout<<"enter the length and width of a circle"<<endl;
			cin>>length>>width;
		}
		void display_Area(){
			cout<<"====area of rectangle===="<<endl;
			double AR;
			AR=length*width;
			cout<<"Area of Circle is="<<AR<<endl;
		}
};
int main(){
  Rectangle r1;
  Shape *sh;
  sh=&r1;
  sh->get_value();
  sh->display_Area();
}