#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inche;
	public:
		Distance():feet(0),inche(0){}
		Distance(int ft,float ih):feet(ft),inche(ih){}
		void Setdata(){
			cout<<"enter the feet "<<endl;
			cin>>feet;
			cout<<"enter the inche "<<endl;
			cin>>inche;
		}
	  Distance operator + (const Distance& d){
	  	Distance temp;
	  	temp.feet=feet+d.feet;
	  	temp.inche=inche+d.inche;
	  	return temp;
	  }
	  Distance operator - (const Distance& d){
	  	Distance temp;
	  	temp.feet=feet-d.feet;
	  	temp.inche=inche-d.inche;
	  	return temp;
	  }
	   Distance operator * (const Distance& d){
	  	Distance temp;
	  	temp.feet=feet*d.feet;
	  	temp.inche=inche*d.inche;
	  	return temp;
	  }
	   Distance operator / (const Distance& d){
	  	Distance temp;
	  	temp.feet=feet/d.feet;
	  	temp.inche=inche/d.inche;
	  	return temp;
	  }
	   void operator += (Distance& d){
	  	feet+=feet;
	  	inche+=inche;
         }
         void operator *= (Distance& d){
	  	feet*=feet;
	  	inche*=inche;
         }
	  void Showdata(){
	  	cout<<"FEET"<<feet<<"\n"<<"INCHE"<<inche<<endl;
	  }
};
int main(){
	Distance d1(4,5.4),d2,d3;
	d2.Setdata();
	d1.Showdata();
	d2.Showdata();
	cout<<"THE ADDITION "<<endl;
	d3=d1+d2;
	d3.Showdata();
	cout<<"THE SUBSTRACTION"<<endl;
	d3=d1-d2;
	d3.Showdata();
	cout<<"THE MULTIPLICATION"<<endl;
	d3=d1*d2;
	d3.Showdata();
	cout<<"THE DIVISION"<<endl;
	d3=d1/d2;
	d3.Showdata();
	d1+=d2;
	cout<<"THE ASSIGNMENT + "<<endl;
	d1.Showdata();
	d1*=d2;
	cout<<"THE ASSIGNMENT * "<<endl;
	d1.Showdata();
}