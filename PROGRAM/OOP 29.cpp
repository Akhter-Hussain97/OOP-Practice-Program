#include<iostream>
using namespace std;
class DimensionalShape{
	protected:
		double b,h;
	public:
   void	getdata(){
			cout<<"enter the base length"<<endl;
			cin>>b;
			cout<<"enter the shape height"<<endl;
			cin>>h;
		}
	void showdata(){
		cout<<"Base"<<b<<endl;
		cout<<"Height"<<h<<endl;
	}
};
class Cuboid:public DimensionalShape{
	private:
	char color[50];
	double L;
	public:
		void getdata(){
			DimensionalShape::getdata();
			cout<<"enter the shape color"<<endl;
			cin>>color;
				cin.ignore();
			cout<<"enter the base length"<<endl;
			cin>>L;
		}
		void Showdata(){
			DimensionalShape::showdata();
			cout<<"Shape Color"<<color<<endl;
			cout<<"base Lenght"<<L<<endl;
		} 
		 bool operator==(const Cuboid &other) const {
        return(2*(b*h+ h*L+b*L)==2*(other.b*other.h+other.h*other.L+other.b*other.L)&&strcmp(color,other.color)==0);
    }
};
int main(){
	Cuboid C1,C2;
	C1.getdata();
	cout<<"the C1 output"<<endl;
	C1.showdata();
	C2.getdata();
	cout<<"the C2 output"<<endl;
	C2.Showdata();
	 if (C1==C2) {
    cout <<"\nMatching Three Dimensional Shapes"<<endl;
    } else {
        cout<<"\nNon-Matching Three Dimensional Shapes"<<endl;
    }
}