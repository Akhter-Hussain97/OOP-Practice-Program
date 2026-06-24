#include<iostream>
#include<math.h>
using namespace std;
class Shape{
	protected:
		int r, h;
	public:
		virtual void input()=0;
		virtual void output()=0;
};
class AofCone: public Shape{
    public:
    	double Area;
    	float Pi=3.142;
      	void input(){
    		cout<<"Enter the radius and height  of Cone "<<endl;
    		cin>>r>>h;
		}
		void output(){
			Area=3.142*r*(r+sqrt(r*r+h*h));
		  cout<<"The Area of Cone "<<Area<<endl;
		}
};
int main(){
	AofCone A;
	 Shape *sh;
	 sh=&A;
	sh->input();
	sh->output();
}