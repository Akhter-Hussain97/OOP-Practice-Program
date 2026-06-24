#include<iostream>
using namespace std;
class Triangle{
	protected:
		double b;
		double h;
	public:
		Triangle():b(0),h(0){}
		Triangle(double base,double height):b(base),h(height){}
	void getdata(){
			cout<<"enter the base length of side-1"<<endl;
			cin>>b;
			cout<<"enter the height of the triangle "<<endl;
			cin>>h;
		}
	void showdata() const	{
		cout<<"THE BASE LENGTH IS="<<b<<endl;
		cout<<"THE HEIGHT OF THE TRIANGLE"<<h<<endl;
	}
};
class Trapezium:public Triangle{
	private:
		char color[40];
		double a;
	public:
		Trapezium():Triangle(),color(""),a(0){}
		Trapezium(double base,double height,char s[],double l):
			void getdata(){
				Triangle::getdata();
				cout<<"enter the shape color"<<endl;
			cin>>color;
			cout<<"enter the base length of side-2"<<endl;
			cin>>a;
		}
	void showdata()const	{
		Triangle::showdata();
		cout<<"THE SHAPE COLOR IS="<<color<<endl;
		cout<<"THE BASE LENGTH OF SIDE-2 IS="<<a<<endl;
	}
	bool operator==(const Trapezium& n)const{
		return 1/2*(a+b)*h==1/2*(n.a+n.b)*n.h && (a,h,b)==0;
	}
};
int main(){
	Trapezium T1,T2;
	T1.getdata();
	T1.showdata();
	T2.getdata();
	T2.showdata();
	if(T1==T2){
		cout<<"MATCHING TRAPEZIUM"<<endl;
	}
	else
	{
	cout<<" NON MATCHING TRAPEZIUM"<<endl;	
	}
}

