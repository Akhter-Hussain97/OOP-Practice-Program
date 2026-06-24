#include<iostream>
using namespace std;
class Shape{
	protected:
		int r;
	public:
		virtual void get_value()=0;
		virtual void display_Area()=0;	
};
class Circle:public Shape{
	public:
		void get_value(){
			cout<<"enter the radius of a circle"<<endl;
			cin>>r;
		}
		void display_Area(){
			cout<<"====area of circle===="<<endl;
			double AC;
			AC=3.14*r*r;
			cout<<"Area of Circle is="<<AC<<endl;
		}
};
int main(){
  Circle c1;
  Shape *sh;
  sh=&c1;
  sh->get_value();
  sh->display_Area();
}
  