#include<iostream>
using namespace std;
class Shape{
	protected:
		float r;
		int l, w;
	public:
	virtual void inputdata()=0;
	virtual void outputdata()=0;
};
class AofCircle: public Shape{
	public:
		void inputdata(){
			cout<<"Enter the radius of a Circle "<<endl;
			cin>>r;
		}
	void outputdata(){
		double Area;
		float Pi=3.14;
		Area=3.14*r*r;
		cout<<"The Area of Circle "<<Area<<endl;
	}
};
class AofRectangle: public Shape{
	public:
		void inputdata(){
			cout<<"Enter the Length and Width of a Rectangle "<<endl;
			cin>>l>>w;
		}
		void outputdata(){
			double Area;
			Area=l*w;
			cout<<"The Area Of Rectangle is "<<Area<<endl;
		}
};
int main(){
	Shape *sh[2];
	AofCircle Ac;
	AofRectangle Ar;
	sh[0]=&Ac;
	sh[1]=&Ar;
	cout<<"------------Enter Different Shape------------------"<<endl;
	cout<<"===============Enter the Area of Circle============================="<<endl;
	cout<<"================Enter the Area of Rectangle==========================="<<endl;
	cout<<"Case 1: Area of Circle "<<endl;
	cout<<"Case 2: Area of Rectangle "<<endl;
	int Choice;
	cin>>Choice;
	switch(Choice){
		case 1:
			sh[0]->inputdata();
	sh[0]->outputdata();
	break;
	case 2:
		sh[1]->inputdata();
	sh[1]->outputdata();
	break;
	default:
		cout<<"Invalid Input"<<endl;
			
	}

	
	
}